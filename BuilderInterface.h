//BuilderInterface.h

class BuilderInterface{
  public:
	virtual void startExp() = 0;
	virtual void buildNum(int n) = 0;
	virtual void buildAddOp() = 0;
	virtual void buildSubOp() = 0;
	virtual void buildMultOp() = 0;
	virtual void buildDivOp() = 0;
	virtual void buildModOp() = 0;
	virtual void buildOpenP() = 0;
	virtual void buildCloseP() = 0;
	virtual std::shared_ptr<ExpNode> getExp() = 0;
};
