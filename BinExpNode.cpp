#include "BinExpNode.h"

//constructor
BinExpNode::BinExpNode()
: l (nullptr),
r (nullptr)
{}

//des
BinExpNode::~BinExpNode(){
}

//eval
int BinExpNode::eval(){
  if(this->l)
	return this->l->eval();
  if(this->r)
	return this->r->eval();
}
//get L
std::shared_ptr<ExpNode> BinExpNode::getL(){
  return this->l;
}
//get R
std::shared_ptr<ExpNode> BinExpNode::getR(){
  return this->r;
}
//accept
int BinExpNode::accept(ExpNodeVisitor & v){
 //default behavior
}
//set L
void BinExpNode::setL(std::shared_ptr<ExpNode> newL){
  this->l = newL;
}
//set R
void BinExpNode::setR(std::shared_ptr<ExpNode> newR){
  this->r = newR;
}
//val
std::string BinExpNode::val(){
  return ""; //default
}
