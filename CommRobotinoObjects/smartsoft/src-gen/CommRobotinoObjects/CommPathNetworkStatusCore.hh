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
#ifndef COMMROBOTINOOBJECTS_COMMPATHNETWORKSTATUS_CORE_H_
#define COMMROBOTINOOBJECTS_COMMPATHNETWORKSTATUS_CORE_H_

#include "CommRobotinoObjects/CommPathNetworkStatusData.hh"
#include "CommRobotinoObjects/CommPathNode.hh"

#include <iostream>
#include <string>
#include <list>

namespace CommRobotinoObjects {
	
class CommPathNetworkStatusCore {
protected:
	// data structure
	CommRobotinoObjectsIDL::CommPathNetworkStatus idl_CommPathNetworkStatus;
	
public:
	// give a publicly accessible type-name for the template parameter IDL
	typedef CommRobotinoObjectsIDL::CommPathNetworkStatus DATATYPE;
	
	#ifdef ENABLE_HASH
		static size_t generateDataHash(const DATATYPE &);
	#endif
	
	static const char* getCompiledHash();
	static void getAllHashValues(std::list<std::string> &hashes);
	static void checkAllHashValues(std::list<std::string> &hashes);
	
	// default constructors
	CommPathNetworkStatusCore();
	CommPathNetworkStatusCore(const DATATYPE &data);
	// default destructor
	virtual ~CommPathNetworkStatusCore();
	
	const DATATYPE& get() const { return idl_CommPathNetworkStatus; }
	operator const DATATYPE&() const { return idl_CommPathNetworkStatus; }
	DATATYPE& set() { return idl_CommPathNetworkStatus; }

	static inline std::string identifier(void) { return "CommRobotinoObjects::CommPathNetworkStatus"; }
	
	// helper method to easily implement output stream in derived classes
	void to_ostream(std::ostream &os = std::cout) const;
	
	// convert to xml stream
	void to_xml(std::ostream &os, const std::string &indent = "") const;
	
	// restore from xml stream
	void from_xml(std::istream &is);
	
	// User Interface
	
	// getter and setter for element Nodes
	/**
	 * Getter methods for element idl_CommPathNetworkStatus.nodes of type vector<CommRobotinoObjects::CommPathNode>
	 */
	inline std::vector<CommRobotinoObjects::CommPathNode> getNodesCopy() const { 
		return std::vector<CommRobotinoObjects::CommPathNode>(idl_CommPathNetworkStatus.nodes.begin(), idl_CommPathNetworkStatus.nodes.end());
	}
	inline CommRobotinoObjects::CommPathNode getNodesElemAtPos(const size_t &pos) const {
		return CommRobotinoObjects::CommPathNode(idl_CommPathNetworkStatus.nodes[pos]);
	}
	inline size_t getNodesSize() const { return idl_CommPathNetworkStatus.nodes.size(); }
	inline bool isNodesEmpty() const { return idl_CommPathNetworkStatus.nodes.empty(); }
	/**
	 * Setter methods for idl_CommPathNetworkStatus.nodes of type vector<CommRobotinoObjects::CommPathNode>
	 */
	inline CommPathNetworkStatusCore& setNodes(const std::vector<CommRobotinoObjects::CommPathNode> &nodes) { 
		idl_CommPathNetworkStatus.nodes.assign(nodes.begin(), nodes.end());
		return *this;
	}
	inline bool setNodesElemAtPos(const size_t &pos, const CommRobotinoObjects::CommPathNode &elem) {
		if(pos < idl_CommPathNetworkStatus.nodes.size()) {
			idl_CommPathNetworkStatus.nodes[pos] = elem;
			return true;
		}
		return false;
	}
	inline bool insertNodesVectorAtPos(const size_t &pos, const std::vector<CommRobotinoObjects::CommPathNode> &data) {
		if(pos < idl_CommPathNetworkStatus.nodes.size()) {
			idl_CommPathNetworkStatus.nodes.insert(idl_CommPathNetworkStatus.nodes.begin()+pos, data.begin(), data.end());
			return true;
		}
		return false;
	}
	inline void resizeNodes(const size_t &size) { idl_CommPathNetworkStatus.nodes.resize(size); }
	inline bool eraseNodesElemsAtPos(const size_t &pos, const size_t &nbr_elems) {
		if( (pos+nbr_elems) <= idl_CommPathNetworkStatus.nodes.size() ) {
			idl_CommPathNetworkStatus.nodes.erase(idl_CommPathNetworkStatus.nodes.begin()+pos, idl_CommPathNetworkStatus.nodes.begin()+pos+nbr_elems);
			return true;
		}
		return false;
	}
	inline void clearNodes() { idl_CommPathNetworkStatus.nodes.clear(); }
};

} /* namespace CommRobotinoObjects */
#endif /* COMMROBOTINOOBJECTS_COMMPATHNETWORKSTATUS_CORE_H_ */
