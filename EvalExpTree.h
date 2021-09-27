//EvalExpTree.h
#ifndef EVALTREE_H
#define EVALTREE_H
#include "ExpNodeVisitor.h"

class EvalExpTree : public ExpNodeVisitor{
  public:
	EvalExpTree(); //cons
	virtual int visitAdd(AddNode & node);
	virtual int visitSub(SubNode & node);
	virtual int visitMult(MultNode & node);
	virtual int visitDiv(DivNode & node);
	virtual int visitMod(ModNode & node);
	virtual int visitNum(NumNode & node);
	int getResult();
  private:
	int result;
};
#endif
