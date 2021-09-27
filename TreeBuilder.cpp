//TreeBuilder.cpp
#include "TreeBuilder.h"

//cons
TreeBuilder::TreeBuilder()
: tree (nullptr),
s (Stack<std::shared_ptr<ExpNode>>())
{}
//des
TreeBuilder::~TreeBuilder()
{}
//start exp
void TreeBuilder::startExp(){
  std::shared_ptr<Tree> t (new Tree());
  this->tree = t;
}
//build num
void TreeBuilder::buildNum(int n){
  //create num node (case operand)
  std::shared_ptr<ExpNode> num (new NumNode(n));
  s.push(num); //push onto stack
}
//build add
void TreeBuilder::buildAddOp(){
  //create add node
  std::shared_ptr<AddNode> a (new AddNode());
  //pop two from stack
  std::shared_ptr<ExpNode> tL (s.pop());
  std::shared_ptr<ExpNode> tR (s.pop());
  //set as children
  a->setL(tL);
  a->setR(tR);
  //push node onto stack
  s.push(a);
}
//build sub
void TreeBuilder::buildSubOp(){
  //create sub node
  std::shared_ptr<SubNode> sub (new SubNode());
  //pop two from stack
  std::shared_ptr<ExpNode> tL (s.pop());
  std::shared_ptr<ExpNode> tR (s.pop());
  //set as children
  sub->setL(tL);
  sub->setR(tR);
  //push node onto stack
  s.push(sub);
}
//build mult
void TreeBuilder::buildMultOp(){
  //create mult node
  std::shared_ptr<MultNode> m (new MultNode());
  //pop two from stack
  std::shared_ptr<ExpNode> tL (s.pop());
  std::shared_ptr<ExpNode> tR (s.pop());
  //set as children
  m->setL(tL);
  m->setR(tR);
  //push node onto stack
  s.push(m);  
}
//build div
void TreeBuilder::buildDivOp(){
  //create Div node
  std::shared_ptr<DivNode> d (new DivNode());
  //pop two from stack
  std::shared_ptr<ExpNode> tL (s.pop()); 
  std::shared_ptr<ExpNode> tR (s.pop());
  //set as children
  d->setL(tR);
  d->setR(tL);
  //push node onto stack
  s.push(d); 
}
//build mod
void TreeBuilder::buildModOp(){
  //create mod node
  std::shared_ptr<ModNode> mod (new ModNode());
  //pop two from stack
  std::shared_ptr<ExpNode> tL (s.pop());
  std::shared_ptr<ExpNode> tR (s.pop());
  //set as children
  mod->setL(tL);
  mod->setR(tR);
  //push node onto stack
  s.push(mod); 
}
//build open P
void TreeBuilder::buildOpenP(){

}
//build close P
void TreeBuilder::buildCloseP(){

}
//get exp
std::shared_ptr<ExpNode> TreeBuilder::getExp(){
  return s.top();
}
