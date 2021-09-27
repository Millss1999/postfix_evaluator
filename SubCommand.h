//SubCommand.h
//bin op that implement evaluate()
#ifndef SUBCOMMAND_H
#define SUBCOMMAND_H
#include "BinCommand.h"

class SubCommand : public BinCommand{
  public:
	SubCommand(Stack<int> & s);
	int evaluate(int num1, int num2) const;
	int p();
	std::string val();
};
#endif
