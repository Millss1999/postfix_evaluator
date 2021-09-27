//SubNode.h
//bin op that implement eval()
#ifndef SUBNODE_H
#define SUBNODE_H
#include "ExpNode.h"
#include "BinExpNode.h"
#include"ExpNodeVisitor.h"

class SubNode : public BinExpNode{
  public:
	SubNode();
	SubNode(std::shared_ptr<ExpNode> n1, std::shared_ptr<ExpNode> n2);
	virtual ~SubNode();
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
