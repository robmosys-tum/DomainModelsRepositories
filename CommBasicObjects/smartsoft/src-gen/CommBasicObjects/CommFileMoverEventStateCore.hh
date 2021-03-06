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
#ifndef COMMBASICOBJECTS_COMMFILEMOVEREVENTSTATE_CORE_H_
#define COMMBASICOBJECTS_COMMFILEMOVEREVENTSTATE_CORE_H_

#include "CommBasicObjects/CommFileMoverEventStateData.hh"
#include "CommBasicObjects/enumFileMoverEventType.hh"

#include <iostream>
#include <string>
#include <list>

namespace CommBasicObjects {
	
class CommFileMoverEventStateCore {
protected:
	// data structure
	CommBasicObjectsIDL::CommFileMoverEventState idl_CommFileMoverEventState;
	
public:
	// give a publicly accessible type-name for the template parameter IDL
	typedef CommBasicObjectsIDL::CommFileMoverEventState DATATYPE;
	
	#ifdef ENABLE_HASH
		static size_t generateDataHash(const DATATYPE &);
	#endif
	
	static const char* getCompiledHash();
	static void getAllHashValues(std::list<std::string> &hashes);
	static void checkAllHashValues(std::list<std::string> &hashes);
	
	// default constructors
	CommFileMoverEventStateCore();
	CommFileMoverEventStateCore(const DATATYPE &data);
	// default destructor
	virtual ~CommFileMoverEventStateCore();
	
	const DATATYPE& get() const { return idl_CommFileMoverEventState; }
	operator const DATATYPE&() const { return idl_CommFileMoverEventState; }
	DATATYPE& set() { return idl_CommFileMoverEventState; }

	static inline std::string identifier(void) { return "CommBasicObjects::CommFileMoverEventState"; }
	
	// helper method to easily implement output stream in derived classes
	void to_ostream(std::ostream &os = std::cout) const;
	
	// convert to xml stream
	void to_xml(std::ostream &os, const std::string &indent = "") const;
	
	// restore from xml stream
	void from_xml(std::istream &is);
	
	// User Interface
	
	// getter and setter for element NewState
	inline CommBasicObjects::FileMoverEventType getNewState() const { return CommBasicObjects::FileMoverEventType(idl_CommFileMoverEventState.newState); }
	inline CommFileMoverEventStateCore& setNewState(const CommBasicObjects::FileMoverEventType &newState) { idl_CommFileMoverEventState.newState = newState; return *this; }
};

} /* namespace CommBasicObjects */
#endif /* COMMBASICOBJECTS_COMMFILEMOVEREVENTSTATE_CORE_H_ */
