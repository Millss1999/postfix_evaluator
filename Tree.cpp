//Tree.cpp
#include "Tree.h"
//cons
Tree::Tree()
: root (nullptr)
{}
//des
Tree::~Tree()
{}
//getRoot
std::shared_ptr<ExpNode> Tree::getRoot(){
  return root;
}
