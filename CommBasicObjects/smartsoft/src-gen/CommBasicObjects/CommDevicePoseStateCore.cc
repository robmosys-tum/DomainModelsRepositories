//--------------------------------------------------------------------------
// Code generated by the SmartSoft MDSD Toolchain
// The SmartSoft Toolchain has been developed by:
//  
// Service Robotics Research Center
// University of Applied Sciences Ulm
// Prittwitzstr. 10
// 89075 Ulm (Germany)
//
// Information about the SmartSoft MDSD Toolchain is available at:
// www.servicerobotik-ulm.de
//
// Please do not modify this file. It will be re-generated
// running the code generator.
//--------------------------------------------------------------------------
#include "CommBasicObjects/CommDevicePoseStateCore.hh"

// serialization/deserialization operators
//#include "CommBasicObjects/CommDevicePoseStateACE.hh"

// include the hash.idl containing the hash constant
#include "hash.hh"
#include <assert.h>
#include <cstring>
#include <iostream>

// SmartUtils used in from_xml method
#include "smartKnuthMorrisPratt.hh"

#ifdef ENABLE_HASH
	#include <boost/functional/hash.hpp>
#endif

namespace CommBasicObjects 
{
	const char* CommDevicePoseStateCore::getCompiledHash()
	{
		return CommBasicObjectsIDL::REPO_HASH;
	}
	
	void CommDevicePoseStateCore::getAllHashValues(std::list<std::string> &hashes)
	{
		// get own hash value
		hashes.push_back(getCompiledHash());
		// get hash value(s) for CommBasicObjects::CommBaseState(idl_CommDevicePoseState.stateBase)
		CommBasicObjects::CommBaseState::getAllHashValues(hashes);
		// get hash value(s) for CommBasicObjects::CommPose3d(idl_CommDevicePoseState.devicePose)
		CommBasicObjects::CommPose3d::getAllHashValues(hashes);
	}
	
	void CommDevicePoseStateCore::checkAllHashValues(std::list<std::string> &hashes)
	{
		// check own hash value
		if (strcmp(getCompiledHash(), hashes.front().c_str()) != 0)
		{
			std::cerr << "###################################################" << std::endl;
			std::cerr << "WARNING: HASHES OF COMMUNICATION OBJECTS MISSMATCH!" << std::endl;
			std::cerr << "CommDevicePoseStateCore hash" << std::endl;
			std::cerr << "Expected: " << getCompiledHash() << std::endl;
			std::cerr << "Received: " << hashes.front() << std::endl;
			std::cerr << "###################################################" << std::endl;
		}
		assert(strcmp(getCompiledHash(), hashes.front().c_str()) == 0);
		hashes.pop_front();
		
		// check hash value(s) for CommBasicObjects::CommBaseState(idl_CommDevicePoseState.stateBase)
		CommBasicObjects::CommBaseState::checkAllHashValues(hashes);
		// check hash value(s) for CommBasicObjects::CommPose3d(idl_CommDevicePoseState.devicePose)
		CommBasicObjects::CommPose3d::checkAllHashValues(hashes);
	}
	
	#ifdef ENABLE_HASH
	size_t CommDevicePoseStateCore::generateDataHash(const DATATYPE &data)
	{
		size_t seed = 0;
		
		seed += CommBasicObjects::CommBaseState::generateDataHash(data.stateBase);
		seed += CommBasicObjects::CommPose3d::generateDataHash(data.devicePose);
		
		return seed;
	}
	#endif
	
	// default constructor
	CommDevicePoseStateCore::CommDevicePoseStateCore()
	:	idl_CommDevicePoseState()
	{  
		setStateBase(CommBasicObjects::CommBaseState());
		setDevicePose(CommBasicObjects::CommPose3d());
	}
	
	CommDevicePoseStateCore::CommDevicePoseStateCore(const DATATYPE &data)
	:	idl_CommDevicePoseState(data)
	{  }

	CommDevicePoseStateCore::~CommDevicePoseStateCore()
	{  }
	
	void CommDevicePoseStateCore::to_ostream(std::ostream &os) const
	{
	  os << "CommDevicePoseState(";
	  getStateBase().to_ostream(os);
	  getDevicePose().to_ostream(os);
	  os << ") ";
	}
	
	// convert to xml stream
	void CommDevicePoseStateCore::to_xml(std::ostream &os, const std::string &indent) const {
		os << indent << "<stateBase>";
		getStateBase().to_xml(os, indent);
		os << indent << "</stateBase>";
		os << indent << "<devicePose>";
		getDevicePose().to_xml(os, indent);
		os << indent << "</devicePose>";
	}
	
	// restore from xml stream
	void CommDevicePoseStateCore::from_xml(std::istream &is) {
		static const Smart::KnuthMorrisPratt kmp_stateBase("<stateBase>");
		static const Smart::KnuthMorrisPratt kmp_devicePose("<devicePose>");
		
		if(kmp_stateBase.search(is)) {
			CommBasicObjects::CommBaseState stateBaseItem;
			stateBaseItem.from_xml(is);
			setStateBase(stateBaseItem);
		}
		if(kmp_devicePose.search(is)) {
			CommBasicObjects::CommPose3d devicePoseItem;
			devicePoseItem.from_xml(is);
			setDevicePose(devicePoseItem);
		}
	}
	
	/*
	void CommDevicePoseStateCore::get(ACE_Message_Block *&msg) const
	{
		// start with a default internal buffer size(will automatically grow if needed)
		ACE_OutputCDR cdr(ACE_DEFAULT_CDR_BUFSIZE);
		
		CommBasicObjectsIDL::HashList hashes;
		getAllHashValues(hashes);
		cdr << static_cast<ACE_CDR::Long>(hashes.size());
		for(CommBasicObjectsIDL::HashList::const_iterator it=hashes.begin(); it!=hashes.end(); it++)
		{
			cdr << ACE_CString(it->c_str());
		}
		
		// Here the actual serialization takes place using the OutputCDR serialization operator<<
		// (see CommDevicePoseStateACE.hh)
		cdr << idl_CommDevicePoseState;
		
	#ifdef ENABLE_HASH
		ACE_CDR::ULong data_hash = generateDataHash(idl_CommDevicePoseState);
		cdr << data_hash;
		// std::cout << "CommDevicePoseStateCore: current data hash: " << data_hash << std::endl;
	#endif
		
		// return a shallow copy of the serialized message 
		// (no data is actually copied, only the internal reference counter is incremented)
		// in order to prevent memory leaks the caller of this get(msg) method must
		// manually free the memory by calling the release() method of the message block msg
		msg = cdr.begin()->duplicate();
	}
	
	void CommDevicePoseStateCore::set(const ACE_Message_Block *msg)
	{
		ACE_InputCDR cdr(msg);
	
		CommBasicObjectsIDL::HashList hashes;
		ACE_CDR::Long hashes_size;
		cdr >> hashes_size;
		for(int i=0; i<hashes_size; ++i) 
		{
			ACE_CString hash;
			cdr >> hash;
			hashes.push_back(hash.c_str());
		}
		checkAllHashValues(hashes);
		
		// Here the actual de-serialization takes place using the InputCDR serialization operator>>
		// (see CommDevicePoseStateACE.hh)
		cdr >> idl_CommDevicePoseState;
		
	#ifdef ENABLE_HASH
		ACE_CDR::Long data_hash;
		cdr >> data_hash;
		ACE_CDR::Long own_hash = generateDataHash(idl_CommDevicePoseState);
		assert(data_hash == own_hash);
		// std::cout << "CommDevicePoseStateCore: own data hash: " << own_hash << "; received data hash: " << data_hash << std::endl;
	#endif
	}
	*/
} /* namespace CommBasicObjects */
