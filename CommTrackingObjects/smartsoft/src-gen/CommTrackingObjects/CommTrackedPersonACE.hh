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
#ifndef COMMTRACKINGOBJECTS_COMMTRACKEDPERSON_ACE_H_
#define COMMTRACKINGOBJECTS_COMMTRACKEDPERSON_ACE_H_

#include "CommTrackingObjects/CommTrackedPerson.hh"

#include <ace/CDR_Stream.h>

// serialization operator for DataStructure CommTrackedPerson
ACE_CDR::Boolean operator<<(ACE_OutputCDR &cdr, const CommTrackingObjectsIDL::CommTrackedPerson &data);

// de-serialization operator for DataStructure CommTrackedPerson
ACE_CDR::Boolean operator>>(ACE_InputCDR &cdr, CommTrackingObjectsIDL::CommTrackedPerson &data);

// serialization operator for CommunicationObject CommTrackedPerson
ACE_CDR::Boolean operator<<(ACE_OutputCDR &cdr, const CommTrackingObjects::CommTrackedPerson &obj);

// de-serialization operator for CommunicationObject CommTrackedPerson
ACE_CDR::Boolean operator>>(ACE_InputCDR &cdr, CommTrackingObjects::CommTrackedPerson &obj);

#endif /* COMMTRACKINGOBJECTS_COMMTRACKEDPERSON_ACE_H_ */
