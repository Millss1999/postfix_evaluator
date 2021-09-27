//NumCommand.h
//holds number
#ifndef NUMCOMMAND_H
#define NUMCOMMAND_H
#include "Command.h"
class NumCommand : public Command{
  public:
	NumCommand(Stack<int> & passedS, int passedN);
	bool execute(void);
	int p();
	std::string val();
  private:
	Stack<int> & s;
	int n;
};
#endif
