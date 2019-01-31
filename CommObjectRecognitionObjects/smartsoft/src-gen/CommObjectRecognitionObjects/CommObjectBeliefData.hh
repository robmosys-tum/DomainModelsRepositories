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
#ifndef COMMOBJECTRECOGNITIONOBJECTS_COMMOBJECTBELIEF_DATA_H_
#define COMMOBJECTRECOGNITIONOBJECTS_COMMOBJECTBELIEF_DATA_H_

#include "CommBasicObjects/CommPose3dData.hh"

#include <vector>
#include <string>

namespace CommObjectRecognitionObjectsIDL 
{
	typedef std::vector<double> CommObjectBelief_cov_type;
	struct CommObjectBelief
	{
		std::string type;
		double probability;
		CommBasicObjectsIDL::CommPose3d pose;
		CommObjectBelief_cov_type cov;
		bool validPosePdf;
  	};
};

#endif /* COMMOBJECTRECOGNITIONOBJECTS_COMMOBJECTBELIEF_DATA_H_ */