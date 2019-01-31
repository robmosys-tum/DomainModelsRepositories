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
#ifndef COMMPTUOBJECTS_COMMPTUGOALEVENTPARAMETER_ACE_H_
#define COMMPTUOBJECTS_COMMPTUGOALEVENTPARAMETER_ACE_H_

#include "CommPTUObjects/CommPTUGoalEventParameter.hh"

#include <ace/CDR_Stream.h>

// serialization operator for DataStructure CommPTUGoalEventParameter
ACE_CDR::Boolean operator<<(ACE_OutputCDR &cdr, const CommPTUObjectsIDL::CommPTUGoalEventParameter &data);

// de-serialization operator for DataStructure CommPTUGoalEventParameter
ACE_CDR::Boolean operator>>(ACE_InputCDR &cdr, CommPTUObjectsIDL::CommPTUGoalEventParameter &data);

// serialization operator for CommunicationObject CommPTUGoalEventParameter
ACE_CDR::Boolean operator<<(ACE_OutputCDR &cdr, const CommPTUObjects::CommPTUGoalEventParameter &obj);

// de-serialization operator for CommunicationObject CommPTUGoalEventParameter
ACE_CDR::Boolean operator>>(ACE_InputCDR &cdr, CommPTUObjects::CommPTUGoalEventParameter &obj);

#endif /* COMMPTUOBJECTS_COMMPTUGOALEVENTPARAMETER_ACE_H_ */