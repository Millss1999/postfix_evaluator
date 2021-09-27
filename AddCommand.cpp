#include "AddCommand.h"

AddCommand::AddCommand(Stack<int> & s)
: BinCommand(s)
{}
int AddCommand::evaluate(int num1, int num2) const{
  return num1 + num2;
}

int AddCommand::p(){
  return 1; //2nd tier precedence
}

std::string AddCommand::val(){
  return "+";
}
