#include "MultCommand.h"

MultCommand::MultCommand(Stack<int> & s)
: BinCommand(s)
{}

int MultCommand::evaluate(int num1, int num2) const{
  return num1 * num2;
}

int MultCommand::p(){
  return 2; //highest precedence
}

std::string MultCommand::val(){
  return "*";
}
