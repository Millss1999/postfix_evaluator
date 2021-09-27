#include "DivNode.h"

//cons
DivNode::DivNode()
: l (nullptr),
r (nullptr) 
{}
//overloaded cons
DivNode::DivNode(std::shared_ptr<ExpNode> n1, std::shared_ptr<ExpNode> n2)
: l (n1),
r (n2)
{}
//des
DivNode::~DivNode(){
  
}
//eval
int DivNode::eval(){
  //return left / right 
  return this->r->eval() / this->l->eval();
}
//accept
int DivNode::accept(ExpNodeVisitor & v){
  v.visitDiv(*this);
}
//getL
std::shared_ptr<ExpNode> DivNode::getL(){
  return this->l;
}
//getR
std::shared_ptr<ExpNode> DivNode::getR(){
  return this->r;
}
//set L
void DivNode::setL(std::shared_ptr<ExpNode> newL){
  this->l = newL;
}
//set R
void DivNode::setR(std::shared_ptr<ExpNode> newR){
  this->r = newR;
}
//val
std::string DivNode::val(){
  return "/";
}
