//DivCommand.h
//bin op that implement evaluate()
#ifndef DIVCOMMAND_H
#define DIVCOMMAND_H
#include "BinCommand.h"

class DivCommand : public BinCommand{
  public:
	DivCommand(Stack<int> & s);
	int evaluate(int num1, int num2) const;
	int p();
	std::string val();
};
#endif
