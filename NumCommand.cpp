#include "NumCommand.h"

//Constructor
NumCommand::NumCommand(Stack<int> & passedS, int passedN)
: s (passedS),
n (passedN)
{}

//Execute
bool NumCommand::execute(void){
  s.push(this->n);
}
//p
int NumCommand::p(){
  return -1;
}

std::string NumCommand::val(){
  return "num";
}
