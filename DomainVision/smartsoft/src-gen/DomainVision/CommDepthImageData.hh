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
#ifndef DOMAINVISION_COMMDEPTHIMAGE_DATA_H_
#define DOMAINVISION_COMMDEPTHIMAGE_DATA_H_

#include "DomainVision/enumImageDistortionModelData.hh"
#include "DomainVision/enumDepthFormatTypeData.hh"

#include <vector>

namespace DomainVisionIDL 
{
	typedef std::vector<unsigned char> CommDepthImage_data_type;
	typedef std::vector<double> CommDepthImage_intrinsic_m_type;
	typedef std::vector<double> CommDepthImage_extrinsic_m_type;
	typedef std::vector<double> CommDepthImage_stereo_m_type;
	typedef std::vector<double> CommDepthImage_distortion_m_type;
	struct CommDepthImage
	{
		unsigned int width;
		unsigned int height;
		DomainVisionIDL::DepthFormatType format;
		unsigned int pixel_size;
		double min_distcance;
		double max_distcance;
		CommDepthImage_data_type data;
		double scale;
		CommDepthImage_intrinsic_m_type intrinsic_m;
		CommDepthImage_extrinsic_m_type extrinsic_m;
		CommDepthImage_stereo_m_type stereo_m;
		CommDepthImage_distortion_m_type distortion_m;
		DomainVisionIDL::ImageDistortionModel distortion_model;
		unsigned int seq_count;
		bool is_valid;
  	};
};

#endif /* DOMAINVISION_COMMDEPTHIMAGE_DATA_H_ */
