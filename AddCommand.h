//AddCommand.h
//bin op that implement evaluate()
#ifndef ADDCOMMAND_H
#define ADDCOMMAND_H
#include "BinCommand.h"

class AddCommand : public BinCommand{
  public:
	AddCommand(Stack<int> & s);
	int evaluate(int num1, int num2) const;
	int p();
	std::string val();
};
#endif
