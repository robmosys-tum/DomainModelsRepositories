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
#ifndef DOMAINPTU_COMMPTUSTATE_CORE_H_
#define DOMAINPTU_COMMPTUSTATE_CORE_H_

#include "DomainPTU/CommPTUStateData.hh"
#include "CommBasicObjects/CommPose3d.hh"

#include <iostream>
#include <string>
#include <list>

namespace DomainPTU {
	
class CommPTUStateCore {
protected:
	// data structure
	DomainPTUIDL::CommPTUState idl_CommPTUState;
	
public:
	// give a publicly accessible type-name for the template parameter IDL
	typedef DomainPTUIDL::CommPTUState DATATYPE;
	
	#ifdef ENABLE_HASH
		static size_t generateDataHash(const DATATYPE &);
	#endif
	
	static const char* getCompiledHash();
	static void getAllHashValues(std::list<std::string> &hashes);
	static void checkAllHashValues(std::list<std::string> &hashes);
	
	// default constructors
	CommPTUStateCore();
	CommPTUStateCore(const DATATYPE &data);
	// default destructor
	virtual ~CommPTUStateCore();
	
	const DATATYPE& get() const { return idl_CommPTUState; }
	operator const DATATYPE&() const { return idl_CommPTUState; }
	DATATYPE& set() { return idl_CommPTUState; }

	static inline std::string identifier(void) { return "DomainPTU::CommPTUState"; }
	
	// helper method to easily implement output stream in derived classes
	void to_ostream(std::ostream &os = std::cout) const;
	
	// convert to xml stream
	void to_xml(std::ostream &os, const std::string &indent = "") const;
	
	// restore from xml stream
	void from_xml(std::istream &is);
	
	// User Interface
	
	// getter and setter for element Pan
	inline double getPan() const { return idl_CommPTUState.pan; }
	inline CommPTUStateCore& setPan(const double &pan) { idl_CommPTUState.pan = pan; return *this; }
	
	// getter and setter for element Tilt
	inline double getTilt() const { return idl_CommPTUState.tilt; }
	inline CommPTUStateCore& setTilt(const double &tilt) { idl_CommPTUState.tilt = tilt; return *this; }
	
	// getter and setter for element Pose_PTU
	inline CommBasicObjects::CommPose3d getPose_PTU() const { return CommBasicObjects::CommPose3d(idl_CommPTUState.pose_PTU); }
	inline CommPTUStateCore& setPose_PTU(const CommBasicObjects::CommPose3d &pose_PTU) { idl_CommPTUState.pose_PTU = pose_PTU; return *this; }
	
	// getter and setter for element Is_valid
	inline bool getIs_valid() const { return idl_CommPTUState.is_valid; }
	inline CommPTUStateCore& setIs_valid(const bool &is_valid) { idl_CommPTUState.is_valid = is_valid; return *this; }
};

} /* namespace DomainPTU */
#endif /* DOMAINPTU_COMMPTUSTATE_CORE_H_ */
