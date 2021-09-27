#include "SubCommand.h"

SubCommand::SubCommand(Stack <int> & s)
: BinCommand(s)
{}

int SubCommand::evaluate(int num1, int num2) const{
  return num1 - num2;
}

int SubCommand::p(){
  return 1; //tier 2 precedence
}

std::string SubCommand::val(){
  return "-";
}
