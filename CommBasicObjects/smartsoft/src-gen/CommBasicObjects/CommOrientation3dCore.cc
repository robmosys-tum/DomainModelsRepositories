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
#include "CommBasicObjects/CommOrientation3dCore.hh"

// serialization/deserialization operators
//#include "CommBasicObjects/CommOrientation3dACE.hh"

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
	const char* CommOrientation3dCore::getCompiledHash()
	{
		return CommBasicObjectsIDL::REPO_HASH;
	}
	
	void CommOrientation3dCore::getAllHashValues(std::list<std::string> &hashes)
	{
		// get own hash value
		hashes.push_back(getCompiledHash());
	}
	
	void CommOrientation3dCore::checkAllHashValues(std::list<std::string> &hashes)
	{
		// check own hash value
		if (strcmp(getCompiledHash(), hashes.front().c_str()) != 0)
		{
			std::cerr << "###################################################" << std::endl;
			std::cerr << "WARNING: HASHES OF COMMUNICATION OBJECTS MISSMATCH!" << std::endl;
			std::cerr << "CommOrientation3dCore hash" << std::endl;
			std::cerr << "Expected: " << getCompiledHash() << std::endl;
			std::cerr << "Received: " << hashes.front() << std::endl;
			std::cerr << "###################################################" << std::endl;
		}
		assert(strcmp(getCompiledHash(), hashes.front().c_str()) == 0);
		hashes.pop_front();
		
	}
	
	#ifdef ENABLE_HASH
	size_t CommOrientation3dCore::generateDataHash(const DATATYPE &data)
	{
		size_t seed = 0;
		
		boost::hash_combine(seed, data.azimuth);
		boost::hash_combine(seed, data.elevation);
		boost::hash_combine(seed, data.roll);
		
		return seed;
	}
	#endif
	
	// default constructor
	CommOrientation3dCore::CommOrientation3dCore()
	:	idl_CommOrientation3d()
	{  
		setAzimuth(0.0);
		setElevation(0.0);
		setRoll(0.0);
	}
	
	CommOrientation3dCore::CommOrientation3dCore(const DATATYPE &data)
	:	idl_CommOrientation3d(data)
	{  }

	CommOrientation3dCore::~CommOrientation3dCore()
	{  }
	
	void CommOrientation3dCore::to_ostream(std::ostream &os) const
	{
	  os << "CommOrientation3d(";
	  os << getAzimuth() << " ";
	  os << getElevation() << " ";
	  os << getRoll() << " ";
	  os << ") ";
	}
	
	// convert to xml stream
	void CommOrientation3dCore::to_xml(std::ostream &os, const std::string &indent) const {
		os << indent << "<azimuth>" << getAzimuth() << "</azimuth>";
		os << indent << "<elevation>" << getElevation() << "</elevation>";
		os << indent << "<roll>" << getRoll() << "</roll>";
	}
	
	// restore from xml stream
	void CommOrientation3dCore::from_xml(std::istream &is) {
		static const Smart::KnuthMorrisPratt kmp_azimuth("<azimuth>");
		static const Smart::KnuthMorrisPratt kmp_elevation("<elevation>");
		static const Smart::KnuthMorrisPratt kmp_roll("<roll>");
		
		if(kmp_azimuth.search(is)) {
			double azimuthItem;
			is >> azimuthItem;
			setAzimuth(azimuthItem);
		}
		if(kmp_elevation.search(is)) {
			double elevationItem;
			is >> elevationItem;
			setElevation(elevationItem);
		}
		if(kmp_roll.search(is)) {
			double rollItem;
			is >> rollItem;
			setRoll(rollItem);
		}
	}
	
	/*
	void CommOrientation3dCore::get(ACE_Message_Block *&msg) const
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
		// (see CommOrientation3dACE.hh)
		cdr << idl_CommOrientation3d;
		
	#ifdef ENABLE_HASH
		ACE_CDR::ULong data_hash = generateDataHash(idl_CommOrientation3d);
		cdr << data_hash;
		// std::cout << "CommOrientation3dCore: current data hash: " << data_hash << std::endl;
	#endif
		
		// return a shallow copy of the serialized message 
		// (no data is actually copied, only the internal reference counter is incremented)
		// in order to prevent memory leaks the caller of this get(msg) method must
		// manually free the memory by calling the release() method of the message block msg
		msg = cdr.begin()->duplicate();
	}
	
	void CommOrientation3dCore::set(const ACE_Message_Block *msg)
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
		// (see CommOrientation3dACE.hh)
		cdr >> idl_CommOrientation3d;
		
	#ifdef ENABLE_HASH
		ACE_CDR::Long data_hash;
		cdr >> data_hash;
		ACE_CDR::Long own_hash = generateDataHash(idl_CommOrientation3d);
		assert(data_hash == own_hash);
		// std::cout << "CommOrientation3dCore: own data hash: " << own_hash << "; received data hash: " << data_hash << std::endl;
	#endif
	}
	*/
} /* namespace CommBasicObjects */
