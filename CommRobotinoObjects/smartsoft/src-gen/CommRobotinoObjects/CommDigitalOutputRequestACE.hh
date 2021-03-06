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
#ifndef COMMROBOTINOOBJECTS_COMMDIGITALOUTPUTREQUEST_ACE_H_
#define COMMROBOTINOOBJECTS_COMMDIGITALOUTPUTREQUEST_ACE_H_

#include "CommRobotinoObjects/CommDigitalOutputRequest.hh"

#include <ace/CDR_Stream.h>

// serialization operator for DataStructure CommDigitalOutputRequest
ACE_CDR::Boolean operator<<(ACE_OutputCDR &cdr, const CommRobotinoObjectsIDL::CommDigitalOutputRequest &data);

// de-serialization operator for DataStructure CommDigitalOutputRequest
ACE_CDR::Boolean operator>>(ACE_InputCDR &cdr, CommRobotinoObjectsIDL::CommDigitalOutputRequest &data);

// serialization operator for CommunicationObject CommDigitalOutputRequest
ACE_CDR::Boolean operator<<(ACE_OutputCDR &cdr, const CommRobotinoObjects::CommDigitalOutputRequest &obj);

// de-serialization operator for CommunicationObject CommDigitalOutputRequest
ACE_CDR::Boolean operator>>(ACE_InputCDR &cdr, CommRobotinoObjects::CommDigitalOutputRequest &obj);

#endif /* COMMROBOTINOOBJECTS_COMMDIGITALOUTPUTREQUEST_ACE_H_ */
