//UnaryNode.h
//only one child
#ifndef UNODE_H
#define UNODE_H
#include "ExpNode.h"
#include<memory>

class UnaryExpNode : public ExpNode{
  public:
	UnaryExpNode();
	virtual ~UnaryExpNode();
  	virtual int eval();
	virtual void accept(ExpNodeVisitor & v);
  protected:
	std::shared_ptr<ExpNode> child;
};
#endif
