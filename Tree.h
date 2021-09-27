//Tree.h
#include "ExpNode.h"

#ifndef TREE_H
#define TREE_H
class Tree{
  public:
	Tree();
	~Tree();
	std::shared_ptr<ExpNode> getRoot();
  private:
	std::shared_ptr<ExpNode> root; //head of tree
};
#endif
