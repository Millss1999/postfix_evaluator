#include "MultNode.h"

//cons
MultNode::MultNode()
: l (nullptr),
r (nullptr) 
{}
//overloaded cons
MultNode::MultNode(std::shared_ptr<ExpNode> n1, std::shared_ptr<ExpNode> n2)
: l (n1),
r (n2)
{}
//des
MultNode::~MultNode(){
 
}
//eval
int MultNode::eval(){
  //return left * right 
  return this->l->eval() * this->r->eval();
}
//accept
int MultNode::accept(ExpNodeVisitor & v){
  v.visitMult(*this);
}
///get L
std::shared_ptr<ExpNode> MultNode::getL(){
  return this->l;
}
//getR
std::shared_ptr<ExpNode> MultNode::getR(){
  return this->r;
}
//set L
void MultNode::setL(std::shared_ptr<ExpNode> newL){
  this->l = newL;
}
//set R
void MultNode::setR(std::shared_ptr<ExpNode> newR){
  this->r = newR;
}
//val
std::string MultNode::val(){
  return "*";
}
