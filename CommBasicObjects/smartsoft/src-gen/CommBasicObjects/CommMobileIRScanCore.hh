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
#ifndef COMMBASICOBJECTS_COMMMOBILEIRSCAN_CORE_H_
#define COMMBASICOBJECTS_COMMMOBILEIRSCAN_CORE_H_

#include "CommBasicObjects/CommMobileIRScanData.hh"
#include "CommBasicObjects/CommBaseState.hh"
#include "CommBasicObjects/CommIRScan.hh"

#include <iostream>
#include <string>
#include <list>

namespace CommBasicObjects {
	
class CommMobileIRScanCore {
protected:
	// data structure
	CommBasicObjectsIDL::CommMobileIRScan idl_CommMobileIRScan;
	
public:
	// give a publicly accessible type-name for the template parameter IDL
	typedef CommBasicObjectsIDL::CommMobileIRScan DATATYPE;
	
	#ifdef ENABLE_HASH
		static size_t generateDataHash(const DATATYPE &);
	#endif
	
	static const char* getCompiledHash();
	static void getAllHashValues(std::list<std::string> &hashes);
	static void checkAllHashValues(std::list<std::string> &hashes);
	
	// default constructors
	CommMobileIRScanCore();
	CommMobileIRScanCore(const DATATYPE &data);
	// default destructor
	virtual ~CommMobileIRScanCore();
	
	const DATATYPE& get() const { return idl_CommMobileIRScan; }
	operator const DATATYPE&() const { return idl_CommMobileIRScan; }
	DATATYPE& set() { return idl_CommMobileIRScan; }

	static inline std::string identifier(void) { return "CommBasicObjects::CommMobileIRScan"; }
	
	// helper method to easily implement output stream in derived classes
	void to_ostream(std::ostream &os = std::cout) const;
	
	// convert to xml stream
	void to_xml(std::ostream &os, const std::string &indent = "") const;
	
	// restore from xml stream
	void from_xml(std::istream &is);
	
	// User Interface
	
	// getter and setter for element Is_valid
	inline bool getIs_valid() const { return idl_CommMobileIRScan.is_valid; }
	inline CommMobileIRScanCore& setIs_valid(const bool &is_valid) { idl_CommMobileIRScan.is_valid = is_valid; return *this; }
	
	// getter and setter for element BaseState
	inline CommBasicObjects::CommBaseState getBaseState() const { return CommBasicObjects::CommBaseState(idl_CommMobileIRScan.baseState); }
	inline CommMobileIRScanCore& setBaseState(const CommBasicObjects::CommBaseState &baseState) { idl_CommMobileIRScan.baseState = baseState; return *this; }
	
	// getter and setter for element IrScan
	inline CommBasicObjects::CommIRScan getIrScan() const { return CommBasicObjects::CommIRScan(idl_CommMobileIRScan.irScan); }
	inline CommMobileIRScanCore& setIrScan(const CommBasicObjects::CommIRScan &irScan) { idl_CommMobileIRScan.irScan = irScan; return *this; }
};

} /* namespace CommBasicObjects */
#endif /* COMMBASICOBJECTS_COMMMOBILEIRSCAN_CORE_H_ */
