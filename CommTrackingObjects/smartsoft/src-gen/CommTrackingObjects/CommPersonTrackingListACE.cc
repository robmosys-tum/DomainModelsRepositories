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
#include "CommTrackingObjects/CommPersonTrackingListACE.hh"
#include <ace/SString.h>
#include "CommTrackingObjects/CommTrackedPersonACE.hh"

// serialization operator for element CommPersonTrackingList
ACE_CDR::Boolean operator<<(ACE_OutputCDR &cdr, const CommTrackingObjectsIDL::CommPersonTrackingList &data)
{
	ACE_CDR::Boolean good_bit = true;
	// serialize list-element trackedPersons
	good_bit = good_bit && cdr << ACE_Utils::truncate_cast<ACE_CDR::ULong>(data.trackedPersons.size());
	std::vector<CommTrackingObjectsIDL::CommTrackedPerson>::const_iterator data_trackedPersonsIt;
	for(data_trackedPersonsIt=data.trackedPersons.begin(); data_trackedPersonsIt!=data.trackedPersons.end(); data_trackedPersonsIt++) {
		good_bit = good_bit && cdr << *data_trackedPersonsIt;
	}
	// serialize list-element followedPerson
	good_bit = good_bit && cdr.write_long(data.followedPerson);
	// serialize list-element isValid
	good_bit = good_bit && cdr.write_boolean(data.isValid);
	
	return good_bit;
}

// de-serialization operator for element CommPersonTrackingList
ACE_CDR::Boolean operator>>(ACE_InputCDR &cdr, CommTrackingObjectsIDL::CommPersonTrackingList &data)
{
	ACE_CDR::Boolean good_bit = true;
	// deserialize list-type element trackedPersons
	ACE_CDR::ULong data_trackedPersonsNbr;
	good_bit = good_bit && cdr >> data_trackedPersonsNbr;
	data.trackedPersons.clear();
	CommTrackingObjectsIDL::CommTrackedPerson data_trackedPersonsItem;
	for(ACE_CDR::ULong i=0; i<data_trackedPersonsNbr; ++i) {
		good_bit = good_bit && cdr >> data_trackedPersonsItem;
		data.trackedPersons.push_back(data_trackedPersonsItem);
	}
	// deserialize type element followedPerson
	good_bit = good_bit && cdr.read_long(data.followedPerson);
	// deserialize type element isValid
	good_bit = good_bit && cdr.read_boolean(data.isValid);
	
	return good_bit;
}

// serialization operator for CommunicationObject CommPersonTrackingList
ACE_CDR::Boolean operator<<(ACE_OutputCDR &cdr, const CommTrackingObjects::CommPersonTrackingList &obj)
{
	return cdr << obj.get();
}

// de-serialization operator for CommunicationObject CommPersonTrackingList
ACE_CDR::Boolean operator>>(ACE_InputCDR &cdr, CommTrackingObjects::CommPersonTrackingList &obj)
{
	return cdr >> obj.set();
}
