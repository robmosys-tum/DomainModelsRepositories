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
#include "DomainForklift/CommForkliftEventResultACE.hh"
#include <ace/SString.h>
#include "DomainForklift/enumForkliftEventTypeData.hh"

// serialization operator for element CommForkliftEventResult
ACE_CDR::Boolean operator<<(ACE_OutputCDR &cdr, const DomainForkliftIDL::CommForkliftEventResult &data)
{
	ACE_CDR::Boolean good_bit = true;
	// serialize list-element state
	good_bit = good_bit && cdr.write_long(data.state);
	
	return good_bit;
}

// de-serialization operator for element CommForkliftEventResult
ACE_CDR::Boolean operator>>(ACE_InputCDR &cdr, DomainForkliftIDL::CommForkliftEventResult &data)
{
	ACE_CDR::Boolean good_bit = true;
	// deserialize type element state
	good_bit = good_bit && cdr.read_long(data.state);
	
	return good_bit;
}

// serialization operator for CommunicationObject CommForkliftEventResult
ACE_CDR::Boolean operator<<(ACE_OutputCDR &cdr, const DomainForklift::CommForkliftEventResult &obj)
{
	return cdr << obj.get();
}

// de-serialization operator for CommunicationObject CommForkliftEventResult
ACE_CDR::Boolean operator>>(ACE_InputCDR &cdr, DomainForklift::CommForkliftEventResult &obj)
{
	return cdr >> obj.set();
}
