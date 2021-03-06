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
#ifndef COMMBASICOBJECTS_COMMBASEPOSE_DATA_H_
#define COMMBASICOBJECTS_COMMBASEPOSE_DATA_H_

#include "CommBasicObjects/CommTimeStampData.hh"
#include "CommBasicObjects/CommPose3dData.hh"

#include <vector>

namespace CommBasicObjectsIDL 
{
	typedef std::vector<double> CommBasePose_covMatrix_type;
	struct CommBasePose
	{
		bool covInvalid;
		CommBasePose_covMatrix_type covMatrix;
		unsigned int updateCount;
		CommBasicObjectsIDL::CommPose3d pose3D;
		CommBasicObjectsIDL::CommTimeStamp timeStamp;
  	};
};

#endif /* COMMBASICOBJECTS_COMMBASEPOSE_DATA_H_ */
