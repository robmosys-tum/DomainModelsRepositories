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
#ifndef COMMPERCEPTION_BGRSPACE_H_
#define COMMPERCEPTION_BGRSPACE_H_

#include "CommPerception/BGRSpaceCore.hh"

namespace CommPerception {
		
class BGRSpace : public BGRSpaceCore {
	public:
		// default constructors
		BGRSpace();
		
		/**
		 * Constructor to set all values.
		 * NOTE that you have to keep this constructor consistent with the model!
		 * Use  at your own choice.
		 *
		 * The preferred way to set values for initialization is:
		 *      CommRepository::MyCommObject obj;
		 *      obj.setX(1).setY(2).setZ(3)...;
		 */
		// BGRSpace(const double &b = 0.0, const double &g = 0.0, const double &r = 0.0);
		
		BGRSpace(const BGRSpaceCore &bGRSpace);
		BGRSpace(const DATATYPE &bGRSpace);
		virtual ~BGRSpace();
		
		// use framework specific getter and setter methods from core (base) class
		using BGRSpaceCore::get;
		using BGRSpaceCore::set;
		
		//
		// feel free to add customized methods here
		//
};

inline std::ostream &operator<<(std::ostream &os, const BGRSpace &co)
{
	co.to_ostream(os);
	return os;
}
	
} /* namespace CommPerception */
#endif /* COMMPERCEPTION_BGRSPACE_H_ */