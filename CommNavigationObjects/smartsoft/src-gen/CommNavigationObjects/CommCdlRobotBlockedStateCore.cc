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
#include "CommNavigationObjects/CommCdlRobotBlockedStateCore.hh"

// serialization/deserialization operators
//#include "CommNavigationObjects/CommCdlRobotBlockedStateACE.hh"

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

namespace CommNavigationObjects 
{
	const char* CommCdlRobotBlockedStateCore::getCompiledHash()
	{
		return CommNavigationObjectsIDL::REPO_HASH;
	}
	
	void CommCdlRobotBlockedStateCore::getAllHashValues(std::list<std::string> &hashes)
	{
		// get own hash value
		hashes.push_back(getCompiledHash());
	}
	
	void CommCdlRobotBlockedStateCore::checkAllHashValues(std::list<std::string> &hashes)
	{
		// check own hash value
		if (strcmp(getCompiledHash(), hashes.front().c_str()) != 0)
		{
			std::cerr << "###################################################" << std::endl;
			std::cerr << "WARNING: HASHES OF COMMUNICATION OBJECTS MISSMATCH!" << std::endl;
			std::cerr << "CommCdlRobotBlockedStateCore hash" << std::endl;
			std::cerr << "Expected: " << getCompiledHash() << std::endl;
			std::cerr << "Received: " << hashes.front() << std::endl;
			std::cerr << "###################################################" << std::endl;
		}
		assert(strcmp(getCompiledHash(), hashes.front().c_str()) == 0);
		hashes.pop_front();
		
	}
	
	#ifdef ENABLE_HASH
	size_t CommCdlRobotBlockedStateCore::generateDataHash(const DATATYPE &data)
	{
		size_t seed = 0;
		
		boost::hash_combine(seed, data.newState);
		
		return seed;
	}
	#endif
	
	// default constructor
	CommCdlRobotBlockedStateCore::CommCdlRobotBlockedStateCore()
	:	idl_CommCdlRobotBlockedState()
	{  
		setNewState(CommNavigationObjects::CdlRobotBlockEventType());
	}
	
	CommCdlRobotBlockedStateCore::CommCdlRobotBlockedStateCore(const DATATYPE &data)
	:	idl_CommCdlRobotBlockedState(data)
	{  }

	CommCdlRobotBlockedStateCore::~CommCdlRobotBlockedStateCore()
	{  }
	
	void CommCdlRobotBlockedStateCore::to_ostream(std::ostream &os) const
	{
	  os << "CommCdlRobotBlockedState(";
	  getNewState().to_ostream(os);
	  os << ") ";
	}
	
	// convert to xml stream
	void CommCdlRobotBlockedStateCore::to_xml(std::ostream &os, const std::string &indent) const {
		os << indent << "<newState>";
		getNewState().to_xml(os, indent);
		os << indent << "</newState>";
	}
	
	// restore from xml stream
	void CommCdlRobotBlockedStateCore::from_xml(std::istream &is) {
		static const Smart::KnuthMorrisPratt kmp_newState("<newState>");
		
		if(kmp_newState.search(is)) {
			CommNavigationObjects::CdlRobotBlockEventType newStateItem;
			newStateItem.from_xml(is);
			setNewState(newStateItem);
		}
	}
	
	/*
	void CommCdlRobotBlockedStateCore::get(ACE_Message_Block *&msg) const
	{
		// start with a default internal buffer size(will automatically grow if needed)
		ACE_OutputCDR cdr(ACE_DEFAULT_CDR_BUFSIZE);
		
		CommNavigationObjectsIDL::HashList hashes;
		getAllHashValues(hashes);
		cdr << static_cast<ACE_CDR::Long>(hashes.size());
		for(CommNavigationObjectsIDL::HashList::const_iterator it=hashes.begin(); it!=hashes.end(); it++)
		{
			cdr << ACE_CString(it->c_str());
		}
		
		// Here the actual serialization takes place using the OutputCDR serialization operator<<
		// (see CommCdlRobotBlockedStateACE.hh)
		cdr << idl_CommCdlRobotBlockedState;
		
	#ifdef ENABLE_HASH
		ACE_CDR::ULong data_hash = generateDataHash(idl_CommCdlRobotBlockedState);
		cdr << data_hash;
		// std::cout << "CommCdlRobotBlockedStateCore: current data hash: " << data_hash << std::endl;
	#endif
		
		// return a shallow copy of the serialized message 
		// (no data is actually copied, only the internal reference counter is incremented)
		// in order to prevent memory leaks the caller of this get(msg) method must
		// manually free the memory by calling the release() method of the message block msg
		msg = cdr.begin()->duplicate();
	}
	
	void CommCdlRobotBlockedStateCore::set(const ACE_Message_Block *msg)
	{
		ACE_InputCDR cdr(msg);
	
		CommNavigationObjectsIDL::HashList hashes;
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
		// (see CommCdlRobotBlockedStateACE.hh)
		cdr >> idl_CommCdlRobotBlockedState;
		
	#ifdef ENABLE_HASH
		ACE_CDR::Long data_hash;
		cdr >> data_hash;
		ACE_CDR::Long own_hash = generateDataHash(idl_CommCdlRobotBlockedState);
		assert(data_hash == own_hash);
		// std::cout << "CommCdlRobotBlockedStateCore: own data hash: " << own_hash << "; received data hash: " << data_hash << std::endl;
	#endif
	}
	*/
} /* namespace CommNavigationObjects */
