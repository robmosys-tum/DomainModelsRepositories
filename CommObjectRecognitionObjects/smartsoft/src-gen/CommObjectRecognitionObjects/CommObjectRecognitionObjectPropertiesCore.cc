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
#include "CommObjectRecognitionObjects/CommObjectRecognitionObjectPropertiesCore.hh"

// serialization/deserialization operators
//#include "CommObjectRecognitionObjects/CommObjectRecognitionObjectPropertiesACE.hh"

// include the hash.idl containing the hash constant
#include "hash.hh"
#include <assert.h>
#include <cstring>
#include <iostream>

// SmartUtils used in from_xml method
#include "smartKnuthMorrisPratt.hh"

#ifdef ENABLE_HASH
	#include <boost/functional/hash.hpp>
#endif

namespace CommObjectRecognitionObjects 
{
	const char* CommObjectRecognitionObjectPropertiesCore::getCompiledHash()
	{
		return CommObjectRecognitionObjectsIDL::REPO_HASH;
	}
	
	void CommObjectRecognitionObjectPropertiesCore::getAllHashValues(std::list<std::string> &hashes)
	{
		// get own hash value
		hashes.push_back(getCompiledHash());
		// get hash value(s) for CommBasicObjects::CommPose3d(idl_CommObjectRecognitionObjectProperties.pose)
		CommBasicObjects::CommPose3d::getAllHashValues(hashes);
		// get hash value(s) for CommBasicObjects::CommPosition3d(idl_CommObjectRecognitionObjectProperties.dimension)
		CommBasicObjects::CommPosition3d::getAllHashValues(hashes);
		// get hash value(s) for CommObjectRecognitionObjects::CommObjectBelief(idl_CommObjectRecognitionObjectProperties.beliefs)
		CommObjectRecognitionObjects::CommObjectBelief::getAllHashValues(hashes);
		// get hash value(s) for CommObjectRecognitionObjects::CommTriMesh(idl_CommObjectRecognitionObjectProperties.mesh)
		CommObjectRecognitionObjects::CommTriMesh::getAllHashValues(hashes);
		// get hash value(s) for CommObjectRecognitionObjects::CommObjectRelation(idl_CommObjectRecognitionObjectProperties.relations)
		CommObjectRecognitionObjects::CommObjectRelation::getAllHashValues(hashes);
		// get hash value(s) for CommBasicObjects::CommPose3d(idl_CommObjectRecognitionObjectProperties.objectSurfacePoses)
		CommBasicObjects::CommPose3d::getAllHashValues(hashes);
	}
	
	void CommObjectRecognitionObjectPropertiesCore::checkAllHashValues(std::list<std::string> &hashes)
	{
		// check own hash value
		if (strcmp(getCompiledHash(), hashes.front().c_str()) != 0)
		{
			std::cerr << "###################################################" << std::endl;
			std::cerr << "WARNING: HASHES OF COMMUNICATION OBJECTS MISSMATCH!" << std::endl;
			std::cerr << "CommObjectRecognitionObjectPropertiesCore hash" << std::endl;
			std::cerr << "Expected: " << getCompiledHash() << std::endl;
			std::cerr << "Received: " << hashes.front() << std::endl;
			std::cerr << "###################################################" << std::endl;
		}
		assert(strcmp(getCompiledHash(), hashes.front().c_str()) == 0);
		hashes.pop_front();
		
		// check hash value(s) for CommBasicObjects::CommPose3d(idl_CommObjectRecognitionObjectProperties.pose)
		CommBasicObjects::CommPose3d::checkAllHashValues(hashes);
		// check hash value(s) for CommBasicObjects::CommPosition3d(idl_CommObjectRecognitionObjectProperties.dimension)
		CommBasicObjects::CommPosition3d::checkAllHashValues(hashes);
		// check hash value(s) for CommObjectRecognitionObjects::CommObjectBelief(idl_CommObjectRecognitionObjectProperties.beliefs)
		CommObjectRecognitionObjects::CommObjectBelief::checkAllHashValues(hashes);
		// check hash value(s) for CommObjectRecognitionObjects::CommTriMesh(idl_CommObjectRecognitionObjectProperties.mesh)
		CommObjectRecognitionObjects::CommTriMesh::checkAllHashValues(hashes);
		// check hash value(s) for CommObjectRecognitionObjects::CommObjectRelation(idl_CommObjectRecognitionObjectProperties.relations)
		CommObjectRecognitionObjects::CommObjectRelation::checkAllHashValues(hashes);
		// check hash value(s) for CommBasicObjects::CommPose3d(idl_CommObjectRecognitionObjectProperties.objectSurfacePoses)
		CommBasicObjects::CommPose3d::checkAllHashValues(hashes);
	}
	
	#ifdef ENABLE_HASH
	size_t CommObjectRecognitionObjectPropertiesCore::generateDataHash(const DATATYPE &data)
	{
		size_t seed = 0;
		
		boost::hash_combine(seed, data.is_valid);
		boost::hash_combine(seed, data.object_id);
		boost::hash_combine(seed, std::string(data.object_type.c_str()));
		seed += CommBasicObjects::CommPose3d::generateDataHash(data.pose);
		seed += CommBasicObjects::CommPosition3d::generateDataHash(data.dimension);
		std::vector<CommObjectRecognitionObjectsIDL::CommObjectBelief>::const_iterator data_beliefsIt;
		for(data_beliefsIt=data.beliefs.begin(); data_beliefsIt!=data.beliefs.end(); data_beliefsIt++) {
			seed += CommObjectRecognitionObjects::CommObjectBelief::generateDataHash(*data_beliefsIt);
		}
		seed += CommObjectRecognitionObjects::CommTriMesh::generateDataHash(data.mesh);
		std::vector<CommObjectRecognitionObjectsIDL::CommObjectRelation>::const_iterator data_relationsIt;
		for(data_relationsIt=data.relations.begin(); data_relationsIt!=data.relations.end(); data_relationsIt++) {
			seed += CommObjectRecognitionObjects::CommObjectRelation::generateDataHash(*data_relationsIt);
		}
		boost::hash_combine(seed, data.fill_level);
		std::vector<CommBasicObjectsIDL::CommPose3d>::const_iterator data_objectSurfacePosesIt;
		for(data_objectSurfacePosesIt=data.objectSurfacePoses.begin(); data_objectSurfacePosesIt!=data.objectSurfacePoses.end(); data_objectSurfacePosesIt++) {
			seed += CommBasicObjects::CommPose3d::generateDataHash(*data_objectSurfacePosesIt);
		}
		
		return seed;
	}
	#endif
	
	// default constructor
	CommObjectRecognitionObjectPropertiesCore::CommObjectRecognitionObjectPropertiesCore()
	:	idl_CommObjectRecognitionObjectProperties()
	{  
		setIs_valid(false);
		setObject_id(0);
		setObject_type("");
		setPose(CommBasicObjects::CommPose3d());
		setDimension(CommBasicObjects::CommPosition3d());
		setBeliefs(std::vector<CommObjectRecognitionObjects::CommObjectBelief>());
		setMesh(CommObjectRecognitionObjects::CommTriMesh());
		setRelations(std::vector<CommObjectRecognitionObjects::CommObjectRelation>());
		setFill_level(-1.0);
		setObjectSurfacePoses(std::vector<CommBasicObjects::CommPose3d>());
	}
	
	CommObjectRecognitionObjectPropertiesCore::CommObjectRecognitionObjectPropertiesCore(const DATATYPE &data)
	:	idl_CommObjectRecognitionObjectProperties(data)
	{  }

	CommObjectRecognitionObjectPropertiesCore::~CommObjectRecognitionObjectPropertiesCore()
	{  }
	
	void CommObjectRecognitionObjectPropertiesCore::to_ostream(std::ostream &os) const
	{
	  os << "CommObjectRecognitionObjectProperties(";
	  os << getIs_valid() << " ";
	  os << getObject_id() << " ";
	  os << getObject_type() << " ";
	  getPose().to_ostream(os);
	  getDimension().to_ostream(os);
	  std::vector<CommObjectRecognitionObjects::CommObjectBelief>::const_iterator beliefsIt;
	  std::vector<CommObjectRecognitionObjects::CommObjectBelief> beliefsList = getBeliefsCopy();
	  for(beliefsIt=beliefsList.begin(); beliefsIt!=beliefsList.end(); beliefsIt++) {
	  	beliefsIt->to_ostream(os);
	  }
	  getMesh().to_ostream(os);
	  std::vector<CommObjectRecognitionObjects::CommObjectRelation>::const_iterator relationsIt;
	  std::vector<CommObjectRecognitionObjects::CommObjectRelation> relationsList = getRelationsCopy();
	  for(relationsIt=relationsList.begin(); relationsIt!=relationsList.end(); relationsIt++) {
	  	relationsIt->to_ostream(os);
	  }
	  os << getFill_level() << " ";
	  std::vector<CommBasicObjects::CommPose3d>::const_iterator objectSurfacePosesIt;
	  std::vector<CommBasicObjects::CommPose3d> objectSurfacePosesList = getObjectSurfacePosesCopy();
	  for(objectSurfacePosesIt=objectSurfacePosesList.begin(); objectSurfacePosesIt!=objectSurfacePosesList.end(); objectSurfacePosesIt++) {
	  	objectSurfacePosesIt->to_ostream(os);
	  }
	  os << ") ";
	}
	
	// convert to xml stream
	void CommObjectRecognitionObjectPropertiesCore::to_xml(std::ostream &os, const std::string &indent) const {
		size_t counter = 0;
		
		os << indent << "<is_valid>" << getIs_valid() << "</is_valid>";
		os << indent << "<object_id>" << getObject_id() << "</object_id>";
		os << indent << "<object_type>" << getObject_type() << "</object_type>";
		os << indent << "<pose>";
		getPose().to_xml(os, indent);
		os << indent << "</pose>";
		os << indent << "<dimension>";
		getDimension().to_xml(os, indent);
		os << indent << "</dimension>";
		std::vector<CommObjectRecognitionObjects::CommObjectBelief>::const_iterator beliefsIt;
		std::vector<CommObjectRecognitionObjects::CommObjectBelief> beliefsList = getBeliefsCopy();
		counter = 0;
		os << indent << "<beliefsList n=\"" << beliefsList.size() << "\">";
		for(beliefsIt=beliefsList.begin(); beliefsIt!=beliefsList.end(); beliefsIt++) {
			os << indent << "<beliefs i=\"" << counter++ << "\">";
			beliefsIt->to_xml(os, indent);
			os << indent << "</beliefs>";
		}
		os << indent << "</beliefsList>";
		os << indent << "<mesh>";
		getMesh().to_xml(os, indent);
		os << indent << "</mesh>";
		std::vector<CommObjectRecognitionObjects::CommObjectRelation>::const_iterator relationsIt;
		std::vector<CommObjectRecognitionObjects::CommObjectRelation> relationsList = getRelationsCopy();
		counter = 0;
		os << indent << "<relationsList n=\"" << relationsList.size() << "\">";
		for(relationsIt=relationsList.begin(); relationsIt!=relationsList.end(); relationsIt++) {
			os << indent << "<relations i=\"" << counter++ << "\">";
			relationsIt->to_xml(os, indent);
			os << indent << "</relations>";
		}
		os << indent << "</relationsList>";
		os << indent << "<fill_level>" << getFill_level() << "</fill_level>";
		std::vector<CommBasicObjects::CommPose3d>::const_iterator objectSurfacePosesIt;
		std::vector<CommBasicObjects::CommPose3d> objectSurfacePosesList = getObjectSurfacePosesCopy();
		counter = 0;
		os << indent << "<objectSurfacePosesList n=\"" << objectSurfacePosesList.size() << "\">";
		for(objectSurfacePosesIt=objectSurfacePosesList.begin(); objectSurfacePosesIt!=objectSurfacePosesList.end(); objectSurfacePosesIt++) {
			os << indent << "<objectSurfacePoses i=\"" << counter++ << "\">";
			objectSurfacePosesIt->to_xml(os, indent);
			os << indent << "</objectSurfacePoses>";
		}
		os << indent << "</objectSurfacePosesList>";
	}
	
	// restore from xml stream
	void CommObjectRecognitionObjectPropertiesCore::from_xml(std::istream &is) {
		size_t counter = 0;
		
		static const Smart::KnuthMorrisPratt kmp_is_valid("<is_valid>");
		static const Smart::KnuthMorrisPratt kmp_object_id("<object_id>");
		static const Smart::KnuthMorrisPratt kmp_object_type("<object_type>");
		static const Smart::KnuthMorrisPratt kmp_pose("<pose>");
		static const Smart::KnuthMorrisPratt kmp_dimension("<dimension>");
		static const Smart::KnuthMorrisPratt kmp_beliefsList("<beliefsList n=\"");
		static const Smart::KnuthMorrisPratt kmp_beliefs("\">");
		static const Smart::KnuthMorrisPratt kmp_mesh("<mesh>");
		static const Smart::KnuthMorrisPratt kmp_relationsList("<relationsList n=\"");
		static const Smart::KnuthMorrisPratt kmp_relations("\">");
		static const Smart::KnuthMorrisPratt kmp_fill_level("<fill_level>");
		static const Smart::KnuthMorrisPratt kmp_objectSurfacePosesList("<objectSurfacePosesList n=\"");
		static const Smart::KnuthMorrisPratt kmp_objectSurfacePoses("\">");
		
		if(kmp_is_valid.search(is)) {
			bool is_validItem;
			is >> is_validItem;
			setIs_valid(is_validItem);
		}
		if(kmp_object_id.search(is)) {
			unsigned int object_idItem;
			is >> object_idItem;
			setObject_id(object_idItem);
		}
		if(kmp_object_type.search(is)) {
			std::string object_typeItem;
			is >> object_typeItem;
			setObject_type(object_typeItem);
		}
		if(kmp_pose.search(is)) {
			CommBasicObjects::CommPose3d poseItem;
			poseItem.from_xml(is);
			setPose(poseItem);
		}
		if(kmp_dimension.search(is)) {
			CommBasicObjects::CommPosition3d dimensionItem;
			dimensionItem.from_xml(is);
			setDimension(dimensionItem);
		}
		if(kmp_beliefsList.search(is)) {
			size_t numberElements;
			is >> numberElements;
			CommObjectRecognitionObjects::CommObjectBelief beliefsItem;
			std::vector<CommObjectRecognitionObjects::CommObjectBelief> beliefsList;
			kmp_beliefs.search(is);
			for(counter=0; counter<numberElements; counter++) {
				if(kmp_beliefs.search(is)) {
					beliefsItem.from_xml(is);
					beliefsList.push_back(beliefsItem);
				}
			}
			setBeliefs(beliefsList);
		}
		if(kmp_mesh.search(is)) {
			CommObjectRecognitionObjects::CommTriMesh meshItem;
			meshItem.from_xml(is);
			setMesh(meshItem);
		}
		if(kmp_relationsList.search(is)) {
			size_t numberElements;
			is >> numberElements;
			CommObjectRecognitionObjects::CommObjectRelation relationsItem;
			std::vector<CommObjectRecognitionObjects::CommObjectRelation> relationsList;
			kmp_relations.search(is);
			for(counter=0; counter<numberElements; counter++) {
				if(kmp_relations.search(is)) {
					relationsItem.from_xml(is);
					relationsList.push_back(relationsItem);
				}
			}
			setRelations(relationsList);
		}
		if(kmp_fill_level.search(is)) {
			double fill_levelItem;
			is >> fill_levelItem;
			setFill_level(fill_levelItem);
		}
		if(kmp_objectSurfacePosesList.search(is)) {
			size_t numberElements;
			is >> numberElements;
			CommBasicObjects::CommPose3d objectSurfacePosesItem;
			std::vector<CommBasicObjects::CommPose3d> objectSurfacePosesList;
			kmp_objectSurfacePoses.search(is);
			for(counter=0; counter<numberElements; counter++) {
				if(kmp_objectSurfacePoses.search(is)) {
					objectSurfacePosesItem.from_xml(is);
					objectSurfacePosesList.push_back(objectSurfacePosesItem);
				}
			}
			setObjectSurfacePoses(objectSurfacePosesList);
		}
	}
	
	/*
	void CommObjectRecognitionObjectPropertiesCore::get(ACE_Message_Block *&msg) const
	{
		// start with a default internal buffer size(will automatically grow if needed)
		ACE_OutputCDR cdr(ACE_DEFAULT_CDR_BUFSIZE);
		
		CommObjectRecognitionObjectsIDL::HashList hashes;
		getAllHashValues(hashes);
		cdr << static_cast<ACE_CDR::Long>(hashes.size());
		for(CommObjectRecognitionObjectsIDL::HashList::const_iterator it=hashes.begin(); it!=hashes.end(); it++)
		{
			cdr << ACE_CString(it->c_str());
		}
		
		// Here the actual serialization takes place using the OutputCDR serialization operator<<
		// (see CommObjectRecognitionObjectPropertiesACE.hh)
		cdr << idl_CommObjectRecognitionObjectProperties;
		
	#ifdef ENABLE_HASH
		ACE_CDR::ULong data_hash = generateDataHash(idl_CommObjectRecognitionObjectProperties);
		cdr << data_hash;
		// std::cout << "CommObjectRecognitionObjectPropertiesCore: current data hash: " << data_hash << std::endl;
	#endif
		
		// return a shallow copy of the serialized message 
		// (no data is actually copied, only the internal reference counter is incremented)
		// in order to prevent memory leaks the caller of this get(msg) method must
		// manually free the memory by calling the release() method of the message block msg
		msg = cdr.begin()->duplicate();
	}
	
	void CommObjectRecognitionObjectPropertiesCore::set(const ACE_Message_Block *msg)
	{
		ACE_InputCDR cdr(msg);
	
		CommObjectRecognitionObjectsIDL::HashList hashes;
		ACE_CDR::Long hashes_size;
		cdr >> hashes_size;
		for(int i=0; i<hashes_size; ++i) 
		{
			ACE_CString hash;
			cdr >> hash;
			hashes.push_back(hash.c_str());
		}
		checkAllHashValues(hashes);
		
		// Here the actual de-serialization takes place using the InputCDR serialization operator>>
		// (see CommObjectRecognitionObjectPropertiesACE.hh)
		cdr >> idl_CommObjectRecognitionObjectProperties;
		
	#ifdef ENABLE_HASH
		ACE_CDR::Long data_hash;
		cdr >> data_hash;
		ACE_CDR::Long own_hash = generateDataHash(idl_CommObjectRecognitionObjectProperties);
		assert(data_hash == own_hash);
		// std::cout << "CommObjectRecognitionObjectPropertiesCore: own data hash: " << own_hash << "; received data hash: " << data_hash << std::endl;
	#endif
	}
	*/
} /* namespace CommObjectRecognitionObjects */
