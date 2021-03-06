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
// This file is generated once. Modify this file to your needs. 
// If you want the toolchain to re-generate this file, please 
// delete it before running the code generator.
//--------------------------------------------------------------------------
#ifndef COMMPERCEPTION_COMMINFDETECTION_H_
#define COMMPERCEPTION_COMMINFDETECTION_H_

#include "CommPerception/CommInfDetectionCore.hh"

namespace CommPerception {
		
class CommInfDetection : public CommInfDetectionCore {
	public:
		// default constructors
		CommInfDetection();
		
		/**
		 * Constructor to set all values.
		 * NOTE that you have to keep this constructor consistent with the model!
		 * Use  at your own choice.
		 *
		 * The preferred way to set values for initialization is:
		 *      CommRepository::MyCommObject obj;
		 *      obj.setX(1).setY(2).setZ(3)...;
		 */
		// CommInfDetection(const CommPerception::Shape &shape, const CommPerception::Color &color, const CommPerception::ROI &roi);
		
		CommInfDetection(const CommInfDetectionCore &commInfDetection);
		CommInfDetection(const DATATYPE &commInfDetection);
		virtual ~CommInfDetection();
		
		// use framework specific getter and setter methods from core (base) class
		using CommInfDetectionCore::get;
		using CommInfDetectionCore::set;
		
		//
		// feel free to add customized methods here
		//
};

inline std::ostream &operator<<(std::ostream &os, const CommInfDetection &co)
{
	co.to_ostream(os);
	return os;
}
	
} /* namespace CommPerception */
#endif /* COMMPERCEPTION_COMMINFDETECTION_H_ */
