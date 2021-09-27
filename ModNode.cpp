#include "ModNode.h"

//cons
ModNode::ModNode()
: l (nullptr),
r (nullptr) 
{}
//overloaded cons
ModNode::ModNode(std::shared_ptr<ExpNode> n1, std::shared_ptr<ExpNode> n2)
: l (n1),
r (n2)
{}
//des
ModNode::~ModNode(){
 
}
//eval
int ModNode::eval(){
  //return left % right 
  return this->l->eval() % this->r->eval();
}
//accept
int ModNode::accept(ExpNodeVisitor & v){
  v.visitMod(*this);
}
//get L
std::shared_ptr<ExpNode> ModNode::getL(){
  return this->l;
}
//get R
std::shared_ptr<ExpNode> ModNode::getR(){
  return this->r;
}
//set L
void ModNode::setL(std::shared_ptr<ExpNode> newL){
  this->l = newL;
}
//set R
void ModNode::setR(std::shared_ptr<ExpNode> newR){
  this->r = newR;
}
//val
std::string ModNode::val(){
  return "%";
}
