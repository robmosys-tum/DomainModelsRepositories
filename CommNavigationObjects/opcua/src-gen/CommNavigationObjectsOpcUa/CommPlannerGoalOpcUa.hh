//--------------------------------------------------------------------------
// Code generated by the SmartSoft MDSD Toolchain
// The SmartSoft Toolchain has been developed by:
//  
// Christian Schlegel (schlegel@hs-ulm.de)
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

#include "CommNavigationObjects/CommPlannerGoal.hh"
#include <SeRoNet/CommunicationObjects/Description/SelfDescription.hpp>
#include <SeRoNet/CommunicationObjects/Description/ElementPrimitives.hpp>
#pragma once


namespace SeRoNet {
namespace CommunicationObjects {
namespace Description {
// serialization for CommPlannerGoal
template <>
ComplexType::shp_t SelfDescription(CommNavigationObjects::CommPlannerGoal *obj, std::string name)
{
	auto ret = std::make_shared<SeRoNet::CommunicationObjects::Description::ComplexType>(name);
	/// \todo check for ComplexObjects
	// add id
	ret->add(
		SeRoNet::CommunicationObjects::Description::IDescription::shp_t(
			new SeRoNet::CommunicationObjects::Description::ElementInt32(
				"id",
				std::bind(&CommNavigationObjects::CommPlannerGoal::getId, obj),
				std::bind(&CommNavigationObjects::CommPlannerGoal::setId, obj, std::placeholders::_1)
			)
		)
	);
	// add flag
	ret->add(
		SeRoNet::CommunicationObjects::Description::IDescription::shp_t(
			new SeRoNet::CommunicationObjects::Description::ElementInt32(
				"flag",
				std::bind(&CommNavigationObjects::CommPlannerGoal::getFlag, obj),
				std::bind(&CommNavigationObjects::CommPlannerGoal::setFlag, obj, std::placeholders::_1)
			)
		)
	);
	// add xWayPoint
	ret->add(
		SeRoNet::CommunicationObjects::Description::IDescription::shp_t(
			new SeRoNet::CommunicationObjects::Description::ElementDouble(
				"xWayPoint",
				std::bind(&CommNavigationObjects::CommPlannerGoal::getXWayPoint, obj),
				std::bind(&CommNavigationObjects::CommPlannerGoal::setXWayPoint, obj, std::placeholders::_1)
			)
		)
	);
	// add yWayPoint
	ret->add(
		SeRoNet::CommunicationObjects::Description::IDescription::shp_t(
			new SeRoNet::CommunicationObjects::Description::ElementDouble(
				"yWayPoint",
				std::bind(&CommNavigationObjects::CommPlannerGoal::getYWayPoint, obj),
				std::bind(&CommNavigationObjects::CommPlannerGoal::setYWayPoint, obj, std::placeholders::_1)
			)
		)
	);
	// add hWayPoint
	ret->add(
		SeRoNet::CommunicationObjects::Description::IDescription::shp_t(
			new SeRoNet::CommunicationObjects::Description::ElementDouble(
				"hWayPoint",
				std::bind(&CommNavigationObjects::CommPlannerGoal::getHWayPoint, obj),
				std::bind(&CommNavigationObjects::CommPlannerGoal::setHWayPoint, obj, std::placeholders::_1)
			)
		)
	);
	// add xGoalPoint
	ret->add(
		SeRoNet::CommunicationObjects::Description::IDescription::shp_t(
			new SeRoNet::CommunicationObjects::Description::ElementDouble(
				"xGoalPoint",
				std::bind(&CommNavigationObjects::CommPlannerGoal::getXGoalPoint, obj),
				std::bind(&CommNavigationObjects::CommPlannerGoal::setXGoalPoint, obj, std::placeholders::_1)
			)
		)
	);
	// add yGoalPoint
	ret->add(
		SeRoNet::CommunicationObjects::Description::IDescription::shp_t(
			new SeRoNet::CommunicationObjects::Description::ElementDouble(
				"yGoalPoint",
				std::bind(&CommNavigationObjects::CommPlannerGoal::getYGoalPoint, obj),
				std::bind(&CommNavigationObjects::CommPlannerGoal::setYGoalPoint, obj, std::placeholders::_1)
			)
		)
	);
	// add hGoalPoint
	ret->add(
		SeRoNet::CommunicationObjects::Description::IDescription::shp_t(
			new SeRoNet::CommunicationObjects::Description::ElementDouble(
				"hGoalPoint",
				std::bind(&CommNavigationObjects::CommPlannerGoal::getHGoalPoint, obj),
				std::bind(&CommNavigationObjects::CommPlannerGoal::setHGoalPoint, obj, std::placeholders::_1)
			)
		)
	);
	return ret;
} // end SelfDescription
} // end namespace Description
} // end namespace CommunicationObjects
} // end namespace SeRoNet