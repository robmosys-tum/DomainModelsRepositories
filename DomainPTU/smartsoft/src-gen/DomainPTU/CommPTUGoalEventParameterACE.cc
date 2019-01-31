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
#include "DomainPTU/CommPTUGoalEventParameterACE.hh"
#include <ace/SString.h>
#include "DomainPTU/enumPTUMoveStatusData.hh"

// serialization operator for element CommPTUGoalEventParameter
ACE_CDR::Boolean operator<<(ACE_OutputCDR &cdr, const DomainPTUIDL::CommPTUGoalEventParameter &data)
{
	ACE_CDR::Boolean good_bit = true;
	// serialize list-element oldState
	good_bit = good_bit && cdr.write_long(data.oldState);
	
	return good_bit;
}

// de-serialization operator for element CommPTUGoalEventParameter
ACE_CDR::Boolean operator>>(ACE_InputCDR &cdr, DomainPTUIDL::CommPTUGoalEventParameter &data)
{
	ACE_CDR::Boolean good_bit = true;
	// deserialize type element oldState
	good_bit = good_bit && cdr.read_long(data.oldState);
	
	return good_bit;
}

// serialization operator for CommunicationObject CommPTUGoalEventParameter
ACE_CDR::Boolean operator<<(ACE_OutputCDR &cdr, const DomainPTU::CommPTUGoalEventParameter &obj)
{
	return cdr << obj.get();
}

// de-serialization operator for CommunicationObject CommPTUGoalEventParameter
ACE_CDR::Boolean operator>>(ACE_InputCDR &cdr, DomainPTU::CommPTUGoalEventParameter &obj)
{
	return cdr >> obj.set();
}