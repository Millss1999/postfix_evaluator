//AddNode.h
//bin op that implement eval()
#ifndef ADDNODE_H
#define ADDNODE_H

#include "BinExpNode.h"
#include "EvalExpTree.h"
class AddNode : public BinExpNode{
  public:
	AddNode();
	AddNode(std::shared_ptr<ExpNode> n1, std::shared_ptr<ExpNode> n2);
	virtual ~AddNode();
	int eval();
	virtual int accept(ExpNodeVisitor & v);
	std::shared_ptr<ExpNode> getL();
	std::shared_ptr<ExpNode> getR();
	void setL(std::shared_ptr<ExpNode> newL);
	void setR(std::shared_ptr<ExpNode> newR);
	std::string val();
  protected:
	std::shared_ptr<ExpNode> l;
	std::shared_ptr<ExpNode> r;	
};
#endif
