#include "ModCommand.h"

ModCommand::ModCommand(Stack<int> & s)
: BinCommand(s)
{}
int ModCommand::evaluate(int num1, int num2) const{
  return num1 % num2;
}

int ModCommand::p(){
  return 2; //highest precedence
}

std::string ModCommand::val(){
  return "%";
}
