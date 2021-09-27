#include "DivCommand.h"
#include <stdexcept>

DivCommand::DivCommand(Stack<int> & s)
: BinCommand(s)
{}
 
int DivCommand::evaluate(int num1, int num2) const{
  if(num2 == 0)
	throw std::exception();
  else
	return num1 / num2;
}

int DivCommand::p(){
  return 2; //highest precedence
}

std::string DivCommand::val(){
  return "/";
}
