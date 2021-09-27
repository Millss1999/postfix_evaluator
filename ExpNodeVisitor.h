//ExpNodeVisitor
#ifndef EXPVISIT_H
#define EXPVISIT_H

class AddNode;
class NumNode;
class SubNode;
class MultNode;
class DivNode;
class ModNode;

class ExpNodeVisitor{
  public:	
	virtual int visitAdd(AddNode & node) = 0;
	virtual int visitSub(SubNode & node) = 0;
	virtual int visitMult(MultNode & node) = 0;
	virtual int visitDiv(DivNode & node) = 0;
	virtual int visitMod(ModNode & node) = 0;
	virtual int visitNum(NumNode & node) = 0;
};
#endif
