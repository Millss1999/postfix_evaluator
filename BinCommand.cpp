#include "BinCommand.h"

//constructor
BinCommand::BinCommand(Stack<int> & passedS)
: s (passedS)
{}

//execute
bool BinCommand::execute(void){
  int n2 = s.pop();
  int n1 = s.pop();
  int result = this->evaluate(n1, n2);
  
  s.push(result);
}

//precedence
int BinCommand::p(){
  //case not prev. defined (lowest precedence)
  return -1;
}

//val
std::string BinCommand::val(){
  return "NO VAL"; //case not overridden
}
