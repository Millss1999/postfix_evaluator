#include "AddNode.h"

//cons
AddNode::AddNode()
: l (nullptr),
r (nullptr) 
{}
//overloaded cons
AddNode::AddNode(std::shared_ptr<ExpNode> n1, std::shared_ptr<ExpNode> n2)
: l (n1),
r (n2)
{}
//des
AddNode::~AddNode(){
}
//int AddNode::eval(){
int AddNode::eval(){
  //return left + right 
  return this->l->eval() + this->r->eval();
}
//accept
int AddNode::accept(ExpNodeVisitor & v){
  v.visitAdd(*this);
}
//getL
std::shared_ptr<ExpNode> AddNode::getL(){
 return this->l;
}
//getR
std::shared_ptr<ExpNode> AddNode::getR(){
  return this->r;
}
//set L
void AddNode::setL(std::shared_ptr<ExpNode> newL){
  this->l = newL;
}
//set R
void AddNode::setR(std::shared_ptr<ExpNode> newR){
  this->r = newR;
}
std::string AddNode::val(){
  return "+";
}
