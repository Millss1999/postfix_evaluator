#include "SubNode.h"

//cons
SubNode::SubNode()
: l (nullptr),
r (nullptr) 
{}
//overloaded cons
SubNode::SubNode(std::shared_ptr<ExpNode> n1, std::shared_ptr<ExpNode> n2)
: l (n1),
r (n2)
{}
//des
SubNode::~SubNode(){

}
//eval
int SubNode::eval(){
  //return left - right 
  return this->r->eval() - this->l->eval();
}
//accept
int SubNode::accept(ExpNodeVisitor & v){
  v.visitSub(*this);
}
//get L
std::shared_ptr<ExpNode> SubNode::getL(){
  return this->l;
}
//get R
std::shared_ptr<ExpNode> SubNode::getR(){
  return this->r;
}
//set L
void SubNode::setL(std::shared_ptr<ExpNode> newL){
  this->l = newL;
}
//set R
void SubNode::setR(std::shared_ptr<ExpNode> newR){
  this->r = newR;
}
//val
std::string SubNode::val(){
  return "-";
}
