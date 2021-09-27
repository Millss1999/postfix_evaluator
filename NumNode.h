//NumNode.h
//holds number
#ifndef NUMNODE_H
#define NUMNODE_H
#include "ExpNode.h"
#include "EvalExpTree.h"
class NumNode : public ExpNode{
  public:
	NumNode(int tempN);
	~NumNode();	
	int eval();
	virtual int accept(ExpNodeVisitor & v);
	std::string val();
  private:
	int n;
};
#endif
