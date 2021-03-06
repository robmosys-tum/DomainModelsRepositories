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
#include "CommObjectRecognitionObjects/CommObjectRelationACE.hh"
#include <ace/SString.h>
#include "CommObjectRecognitionObjects/enumRelationTypeData.hh"

// serialization operator for element CommObjectRelation
ACE_CDR::Boolean operator<<(ACE_OutputCDR &cdr, const CommObjectRecognitionObjectsIDL::CommObjectRelation &data)
{
	ACE_CDR::Boolean good_bit = true;
	// serialize list-element type
	good_bit = good_bit && cdr.write_long(data.type);
	// serialize list-element relatedObjectId
	good_bit = good_bit && cdr.write_ulong(data.relatedObjectId);
	
	return good_bit;
}

// de-serialization operator for element CommObjectRelation
ACE_CDR::Boolean operator>>(ACE_InputCDR &cdr, CommObjectRecognitionObjectsIDL::CommObjectRelation &data)
{
	ACE_CDR::Boolean good_bit = true;
	// deserialize type element type
	good_bit = good_bit && cdr.read_long(data.type);
	// deserialize type element relatedObjectId
	good_bit = good_bit && cdr.read_ulong(data.relatedObjectId);
	
	return good_bit;
}

// serialization operator for CommunicationObject CommObjectRelation
ACE_CDR::Boolean operator<<(ACE_OutputCDR &cdr, const CommObjectRecognitionObjects::CommObjectRelation &obj)
{
	return cdr << obj.get();
}

// de-serialization operator for CommunicationObject CommObjectRelation
ACE_CDR::Boolean operator>>(ACE_InputCDR &cdr, CommObjectRecognitionObjects::CommObjectRelation &obj)
{
	return cdr >> obj.set();
}
