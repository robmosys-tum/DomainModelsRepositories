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
#include "CommManipulatorObjects/CommJointValuesCore.hh"

// serialization/deserialization operators
//#include "CommManipulatorObjects/CommJointValuesACE.hh"

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

namespace CommManipulatorObjects 
{
	const char* CommJointValuesCore::getCompiledHash()
	{
		return CommManipulatorObjectsIDL::REPO_HASH;
	}
	
	void CommJointValuesCore::getAllHashValues(std::list<std::string> &hashes)
	{
		// get own hash value
		hashes.push_back(getCompiledHash());
	}
	
	void CommJointValuesCore::checkAllHashValues(std::list<std::string> &hashes)
	{
		// check own hash value
		if (strcmp(getCompiledHash(), hashes.front().c_str()) != 0)
		{
			std::cerr << "###################################################" << std::endl;
			std::cerr << "WARNING: HASHES OF COMMUNICATION OBJECTS MISSMATCH!" << std::endl;
			std::cerr << "CommJointValuesCore hash" << std::endl;
			std::cerr << "Expected: " << getCompiledHash() << std::endl;
			std::cerr << "Received: " << hashes.front() << std::endl;
			std::cerr << "###################################################" << std::endl;
		}
		assert(strcmp(getCompiledHash(), hashes.front().c_str()) == 0);
		hashes.pop_front();
		
	}
	
	#ifdef ENABLE_HASH
	size_t CommJointValuesCore::generateDataHash(const DATATYPE &data)
	{
		size_t seed = 0;
		
		std::vector<ACE_CDR::Double>::const_iterator data_valuesIt;
		for(data_valuesIt=data.values.begin(); data_valuesIt!=data.values.end(); data_valuesIt++) {
			boost::hash_combine(seed, *data_valuesIt);
		}
		boost::hash_combine(seed, data.time);
		
		return seed;
	}
	#endif
	
	// default constructor
	CommJointValuesCore::CommJointValuesCore()
	:	idl_CommJointValues()
	{  
		setValues(std::vector<double>());
		setTime(0.0);
	}
	
	CommJointValuesCore::CommJointValuesCore(const DATATYPE &data)
	:	idl_CommJointValues(data)
	{  }

	CommJointValuesCore::~CommJointValuesCore()
	{  }
	
	void CommJointValuesCore::to_ostream(std::ostream &os) const
	{
	  os << "CommJointValues(";
	  std::vector<double>::const_iterator valuesIt;
	  std::vector<double> valuesList = getValuesCopy();
	  for(valuesIt=valuesList.begin(); valuesIt!=valuesList.end(); valuesIt++) {
	  	os << *valuesIt << " ";
	  }
	  os << getTime() << " ";
	  os << ") ";
	}
	
	// convert to xml stream
	void CommJointValuesCore::to_xml(std::ostream &os, const std::string &indent) const {
		size_t counter = 0;
		
		std::vector<double>::const_iterator valuesIt;
		std::vector<double> valuesList = getValuesCopy();
		counter = 0;
		os << indent << "<valuesList n=\"" << valuesList.size() << "\">";
		for(valuesIt=valuesList.begin(); valuesIt!=valuesList.end(); valuesIt++) {
			os << indent << "<values i=\"" << counter++ << "\">" << *valuesIt << "</values>";
		}
		os << indent << "</valuesList>";
		os << indent << "<time>" << getTime() << "</time>";
	}
	
	// restore from xml stream
	void CommJointValuesCore::from_xml(std::istream &is) {
		size_t counter = 0;
		
		static const Smart::KnuthMorrisPratt kmp_valuesList("<valuesList n=\"");
		static const Smart::KnuthMorrisPratt kmp_values("\">");
		static const Smart::KnuthMorrisPratt kmp_time("<time>");
		
		if(kmp_valuesList.search(is)) {
			size_t numberElements;
			is >> numberElements;
			double valuesItem;
			std::vector<double> valuesList;
			kmp_values.search(is);
			for(counter=0; counter<numberElements; counter++) {
				if(kmp_values.search(is)) {
					is >> valuesItem;
					valuesList.push_back(valuesItem);
				}
			}
			setValues(valuesList);
		}
		if(kmp_time.search(is)) {
			float timeItem;
			is >> timeItem;
			setTime(timeItem);
		}
	}
	
	/*
	void CommJointValuesCore::get(ACE_Message_Block *&msg) const
	{
		// start with a default internal buffer size(will automatically grow if needed)
		ACE_OutputCDR cdr(ACE_DEFAULT_CDR_BUFSIZE);
		
		CommManipulatorObjectsIDL::HashList hashes;
		getAllHashValues(hashes);
		cdr << static_cast<ACE_CDR::Long>(hashes.size());
		for(CommManipulatorObjectsIDL::HashList::const_iterator it=hashes.begin(); it!=hashes.end(); it++)
		{
			cdr << ACE_CString(it->c_str());
		}
		
		// Here the actual serialization takes place using the OutputCDR serialization operator<<
		// (see CommJointValuesACE.hh)
		cdr << idl_CommJointValues;
		
	#ifdef ENABLE_HASH
		ACE_CDR::ULong data_hash = generateDataHash(idl_CommJointValues);
		cdr << data_hash;
		// std::cout << "CommJointValuesCore: current data hash: " << data_hash << std::endl;
	#endif
		
		// return a shallow copy of the serialized message 
		// (no data is actually copied, only the internal reference counter is incremented)
		// in order to prevent memory leaks the caller of this get(msg) method must
		// manually free the memory by calling the release() method of the message block msg
		msg = cdr.begin()->duplicate();
	}
	
	void CommJointValuesCore::set(const ACE_Message_Block *msg)
	{
		ACE_InputCDR cdr(msg);
	
		CommManipulatorObjectsIDL::HashList hashes;
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
		// (see CommJointValuesACE.hh)
		cdr >> idl_CommJointValues;
		
	#ifdef ENABLE_HASH
		ACE_CDR::Long data_hash;
		cdr >> data_hash;
		ACE_CDR::Long own_hash = generateDataHash(idl_CommJointValues);
		assert(data_hash == own_hash);
		// std::cout << "CommJointValuesCore: own data hash: " << own_hash << "; received data hash: " << data_hash << std::endl;
	#endif
	}
	*/
} /* namespace CommManipulatorObjects */