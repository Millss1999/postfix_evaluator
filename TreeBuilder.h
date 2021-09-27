//TreeBuilder.h
#include"BuilderInterface.h"
#include "Tree.h"

class TreeBuilder : public BuilderInterface{
  public:
	TreeBuilder();
	virtual ~TreeBuilder();
	virtual void startExp();
	//builds
	virtual void buildNum(int n);
	virtual void buildAddOp();
	virtual void buildSubOp();
	virtual void buildMultOp();
	virtual void buildDivOp();
	virtual void buildModOp();
	virtual void buildOpenP();
	virtual void buildCloseP();

	virtual std::shared_ptr<ExpNode> getExp(); //final exp
  private:
	std::shared_ptr<Tree> tree;
	Stack<std::shared_ptr<ExpNode>> s; 
};
