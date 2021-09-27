//ModCommand.h
//bin op that implement evaluate()
#ifndef MODCOMMAND_H
#define MODCOMMAND_H
#include "BinCommand.h"

class ModCommand : public BinCommand{
  public:
	ModCommand(Stack<int> & s);
	int evaluate(int num1, int num2) const;
	int p();
	std::string val();
};
#endif
