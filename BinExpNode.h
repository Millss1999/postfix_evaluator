//BinExpNode.h
//node class for binary ops (+,-,*,/,%)
#ifndef BINNODE_H
#define BINNODE_H
#include "ExpNode.h"
#include<memory>

//class ExpNode;
class BinExpNode : public ExpNode{
  public:
	BinExpNode(); //cons
	virtual ~BinExpNode();
  	virtual int eval(); //evauluate based on op
	virtual int accept(ExpNodeVisitor & v);
	virtual std::shared_ptr<ExpNode> getL();
	virtual std::shared_ptr<ExpNode> getR();
	virtual void setL(std::shared_ptr<ExpNode> newL);
	virtual void setR(std::shared_ptr<ExpNode> newR);
	virtual std::string val();
  protected:
	std::shared_ptr<ExpNode> l;
	std::shared_ptr<ExpNode> r;
};
#endif
