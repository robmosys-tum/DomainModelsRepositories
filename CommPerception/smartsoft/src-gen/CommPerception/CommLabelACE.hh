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
#ifndef COMMPERCEPTION_COMMLABEL_ACE_H_
#define COMMPERCEPTION_COMMLABEL_ACE_H_

#include "CommPerception/CommLabel.hh"

#include <ace/CDR_Stream.h>

// serialization operator for DataStructure CommLabel
ACE_CDR::Boolean operator<<(ACE_OutputCDR &cdr, const CommPerceptionIDL::CommLabel &data);

// de-serialization operator for DataStructure CommLabel
ACE_CDR::Boolean operator>>(ACE_InputCDR &cdr, CommPerceptionIDL::CommLabel &data);

// serialization operator for CommunicationObject CommLabel
ACE_CDR::Boolean operator<<(ACE_OutputCDR &cdr, const CommPerception::CommLabel &obj);

// de-serialization operator for CommunicationObject CommLabel
ACE_CDR::Boolean operator>>(ACE_InputCDR &cdr, CommPerception::CommLabel &obj);

#endif /* COMMPERCEPTION_COMMLABEL_ACE_H_ */