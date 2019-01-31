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
#ifndef COMMVISIONOBJECTS_COMMVIDEOIMAGE_DATA_H_
#define COMMVISIONOBJECTS_COMMVIDEOIMAGE_DATA_H_

#include "CommBasicObjects/CommBaseStateData.hh"
#include "CommVisionObjects/ImageParametersData.hh"
#include "CommVisionObjects/enumImageDistortionModelData.hh"
#include "CommBasicObjects/CommPose3dData.hh"

#include <vector>

namespace CommVisionObjectsIDL 
{
	typedef std::vector<unsigned char> CommVideoImage_data_type;
	typedef std::vector<double> CommVideoImage_intrinsic_m_type;
	typedef std::vector<double> CommVideoImage_distortion_m_type;
	struct CommVideoImage
	{
		CommVisionObjectsIDL::ImageParameters parameter;
		CommVideoImage_data_type data;
		CommBasicObjectsIDL::CommPose3d sensor_pose;
		CommBasicObjectsIDL::CommBaseState base_state;
		bool is_valid;
		unsigned int seq_count;
		CommVideoImage_intrinsic_m_type intrinsic_m;
		CommVideoImage_distortion_m_type distortion_m;
		CommVisionObjectsIDL::ImageDistortionModel distortion_model;
  	};
};

#endif /* COMMVISIONOBJECTS_COMMVIDEOIMAGE_DATA_H_ */