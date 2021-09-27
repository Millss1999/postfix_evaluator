#include "UnaryExpNode.h"

//constructor
UnaryExpNode::UnaryExpNode()
: child (nullptr)
{}

//destructor
UnaryExpNode::~UnaryExpNode(){

}

//execute
int UnaryExpNode::eval(){
  if(this->child)
	return this->child->eval();
}

