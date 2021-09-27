//ExpNode.h 
//base for all Nodes
#ifndef EXPNODE_H
#define EXPNODE_H

class ExpNodeVisitor;
class ExpNode{
  public:
	virtual int eval() = 0;
	virtual int accept(ExpNodeVisitor & v) = 0;
	virtual std::string val() = 0;
};
#endif
