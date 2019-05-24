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
#ifndef COMMOBJECTRECOGNITIONOBJECTS_COMMOBJECTRECOGNITIONINFORMATION_DATA_H_
#define COMMOBJECTRECOGNITIONOBJECTS_COMMOBJECTRECOGNITIONINFORMATION_DATA_H_

#include "CommObjectRecognitionObjects/ColorData.hh"
#include "CommObjectRecognitionObjects/ROIData.hh"


namespace CommObjectRecognitionObjectsIDL 
{
	struct CommObjectRecognitionInformation
	{
		unsigned int id;
		CommObjectRecognitionObjectsIDL::ROI roi;
		CommObjectRecognitionObjectsIDL::Color color;
  	};
};

#endif /* COMMOBJECTRECOGNITIONOBJECTS_COMMOBJECTRECOGNITIONINFORMATION_DATA_H_ */