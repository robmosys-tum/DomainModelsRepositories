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
#ifndef COMMPERCEPTION_BGRSPACE_ACE_H_
#define COMMPERCEPTION_BGRSPACE_ACE_H_

#include "CommPerception/BGRSpace.hh"

#include <ace/CDR_Stream.h>

// serialization operator for DataStructure BGRSpace
ACE_CDR::Boolean operator<<(ACE_OutputCDR &cdr, const CommPerceptionIDL::BGRSpace &data);

// de-serialization operator for DataStructure BGRSpace
ACE_CDR::Boolean operator>>(ACE_InputCDR &cdr, CommPerceptionIDL::BGRSpace &data);

// serialization operator for CommunicationObject BGRSpace
ACE_CDR::Boolean operator<<(ACE_OutputCDR &cdr, const CommPerception::BGRSpace &obj);

// de-serialization operator for CommunicationObject BGRSpace
ACE_CDR::Boolean operator>>(ACE_InputCDR &cdr, CommPerception::BGRSpace &obj);

#endif /* COMMPERCEPTION_BGRSPACE_ACE_H_ */
