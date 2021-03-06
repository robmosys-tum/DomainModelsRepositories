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
#include "CommBasicObjects/LaserScanPointCore.hh"

// serialization/deserialization operators
//#include "CommBasicObjects/LaserScanPointACE.hh"

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
	const char* LaserScanPointCore::getCompiledHash()
	{
		return CommBasicObjectsIDL::REPO_HASH;
	}
	
	void LaserScanPointCore::getAllHashValues(std::list<std::string> &hashes)
	{
		// get own hash value
		hashes.push_back(getCompiledHash());
	}
	
	void LaserScanPointCore::checkAllHashValues(std::list<std::string> &hashes)
	{
		// check own hash value
		if (strcmp(getCompiledHash(), hashes.front().c_str()) != 0)
		{
			std::cerr << "###################################################" << std::endl;
			std::cerr << "WARNING: HASHES OF COMMUNICATION OBJECTS MISSMATCH!" << std::endl;
			std::cerr << "LaserScanPointCore hash" << std::endl;
			std::cerr << "Expected: " << getCompiledHash() << std::endl;
			std::cerr << "Received: " << hashes.front() << std::endl;
			std::cerr << "###################################################" << std::endl;
		}
		assert(strcmp(getCompiledHash(), hashes.front().c_str()) == 0);
		hashes.pop_front();
		
	}
	
	#ifdef ENABLE_HASH
	size_t LaserScanPointCore::generateDataHash(const DATATYPE &data)
	{
		size_t seed = 0;
		
		boost::hash_combine(seed, data.index);
		boost::hash_combine(seed, data.distance);
		boost::hash_combine(seed, data.intensity);
		
		return seed;
	}
	#endif
	
	// default constructor
	LaserScanPointCore::LaserScanPointCore()
	:	idl_LaserScanPoint()
	{  
		setIndex(0);
		setDistance(0);
		setIntensity(0);
	}
	
	LaserScanPointCore::LaserScanPointCore(const DATATYPE &data)
	:	idl_LaserScanPoint(data)
	{  }

	LaserScanPointCore::~LaserScanPointCore()
	{  }
	
	void LaserScanPointCore::to_ostream(std::ostream &os) const
	{
	  os << "LaserScanPoint(";
	  os << getIndex() << " ";
	  os << getDistance() << " ";
	  os << getIntensity() << " ";
	  os << ") ";
	}
	
	// convert to xml stream
	void LaserScanPointCore::to_xml(std::ostream &os, const std::string &indent) const {
		os << indent << "<index>" << getIndex() << "</index>";
		os << indent << "<distance>" << getDistance() << "</distance>";
		os << indent << "<intensity>" << getIntensity() << "</intensity>";
	}
	
	// restore from xml stream
	void LaserScanPointCore::from_xml(std::istream &is) {
		static const Smart::KnuthMorrisPratt kmp_index("<index>");
		static const Smart::KnuthMorrisPratt kmp_distance("<distance>");
		static const Smart::KnuthMorrisPratt kmp_intensity("<intensity>");
		
		if(kmp_index.search(is)) {
			unsigned short indexItem;
			is >> indexItem;
			setIndex(indexItem);
		}
		if(kmp_distance.search(is)) {
			unsigned short distanceItem;
			is >> distanceItem;
			setDistance(distanceItem);
		}
		if(kmp_intensity.search(is)) {
			unsigned char intensityItem;
			is >> intensityItem;
			setIntensity(intensityItem);
		}
	}
	
	/*
	void LaserScanPointCore::get(ACE_Message_Block *&msg) const
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
		// (see LaserScanPointACE.hh)
		cdr << idl_LaserScanPoint;
		
	#ifdef ENABLE_HASH
		ACE_CDR::ULong data_hash = generateDataHash(idl_LaserScanPoint);
		cdr << data_hash;
		// std::cout << "LaserScanPointCore: current data hash: " << data_hash << std::endl;
	#endif
		
		// return a shallow copy of the serialized message 
		// (no data is actually copied, only the internal reference counter is incremented)
		// in order to prevent memory leaks the caller of this get(msg) method must
		// manually free the memory by calling the release() method of the message block msg
		msg = cdr.begin()->duplicate();
	}
	
	void LaserScanPointCore::set(const ACE_Message_Block *msg)
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
		// (see LaserScanPointACE.hh)
		cdr >> idl_LaserScanPoint;
		
	#ifdef ENABLE_HASH
		ACE_CDR::Long data_hash;
		cdr >> data_hash;
		ACE_CDR::Long own_hash = generateDataHash(idl_LaserScanPoint);
		assert(data_hash == own_hash);
		// std::cout << "LaserScanPointCore: own data hash: " << own_hash << "; received data hash: " << data_hash << std::endl;
	#endif
	}
	*/
} /* namespace CommBasicObjects */
