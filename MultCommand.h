//MultCommand.h
//bin op that implement evaluate()
#ifndef MULTCOMMAND_H
#define MULTCOMMAND_H
#include "BinCommand.h"

class MultCommand : public BinCommand{
  public:
	MultCommand(Stack<int> & s);
	int evaluate(int num1, int num2) const;
	int p();
	std::string val();
};
#endif
