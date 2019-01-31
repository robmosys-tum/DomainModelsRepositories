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
#include "CommManipulatorObjects/CommManipulatorRequestScan3dACE.hh"
#include <ace/SString.h>

// serialization operator for element CommManipulatorRequestScan3d
ACE_CDR::Boolean operator<<(ACE_OutputCDR &cdr, const CommManipulatorObjectsIDL::CommManipulatorRequestScan3d &data)
{
	ACE_CDR::Boolean good_bit = true;
	// serialize list-element begin_joint_angles
	good_bit = good_bit && cdr << ACE_Utils::truncate_cast<ACE_CDR::ULong>(data.begin_joint_angles.size());
	good_bit = good_bit && cdr.write_double_array(data.begin_joint_angles.data(), data.begin_joint_angles.size());
	// serialize list-element end_joint_angles
	good_bit = good_bit && cdr << ACE_Utils::truncate_cast<ACE_CDR::ULong>(data.end_joint_angles.size());
	good_bit = good_bit && cdr.write_double_array(data.end_joint_angles.data(), data.end_joint_angles.size());
	// serialize list-element laser_begin_angle
	good_bit = good_bit && cdr.write_double(data.laser_begin_angle);
	// serialize list-element laser_end_angle
	good_bit = good_bit && cdr.write_double(data.laser_end_angle);
	// serialize list-element number_of_steps
	good_bit = good_bit && cdr.write_ushort(data.number_of_steps);
	
	return good_bit;
}

// de-serialization operator for element CommManipulatorRequestScan3d
ACE_CDR::Boolean operator>>(ACE_InputCDR &cdr, CommManipulatorObjectsIDL::CommManipulatorRequestScan3d &data)
{
	ACE_CDR::Boolean good_bit = true;
	// deserialize list-type element begin_joint_angles
	ACE_CDR::ULong data_begin_joint_anglesNbr;
	good_bit = good_bit && cdr >> data_begin_joint_anglesNbr;
	data.begin_joint_angles.resize(data_begin_joint_anglesNbr);
	good_bit = good_bit && cdr.read_double_array(data.begin_joint_angles.data(), data_begin_joint_anglesNbr);
	// deserialize list-type element end_joint_angles
	ACE_CDR::ULong data_end_joint_anglesNbr;
	good_bit = good_bit && cdr >> data_end_joint_anglesNbr;
	data.end_joint_angles.resize(data_end_joint_anglesNbr);
	good_bit = good_bit && cdr.read_double_array(data.end_joint_angles.data(), data_end_joint_anglesNbr);
	// deserialize type element laser_begin_angle
	good_bit = good_bit && cdr.read_double(data.laser_begin_angle);
	// deserialize type element laser_end_angle
	good_bit = good_bit && cdr.read_double(data.laser_end_angle);
	// deserialize type element number_of_steps
	good_bit = good_bit && cdr.read_ushort(data.number_of_steps);
	
	return good_bit;
}

// serialization operator for CommunicationObject CommManipulatorRequestScan3d
ACE_CDR::Boolean operator<<(ACE_OutputCDR &cdr, const CommManipulatorObjects::CommManipulatorRequestScan3d &obj)
{
	return cdr << obj.get();
}

// de-serialization operator for CommunicationObject CommManipulatorRequestScan3d
ACE_CDR::Boolean operator>>(ACE_InputCDR &cdr, CommManipulatorObjects::CommManipulatorRequestScan3d &obj)
{
	return cdr >> obj.set();
}