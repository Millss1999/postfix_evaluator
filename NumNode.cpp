#include "NumNode.h"

//Constructor
NumNode::NumNode(int tempN)
: n (tempN)
{}
//des
NumNode::~NumNode(){

}

//Eval
int NumNode::eval(){
  return this->n;;
}
//accept
int NumNode::accept(ExpNodeVisitor & v){
  v.visitNum(*this);
}
//val
std::string NumNode::val(){
  return "num";
}
