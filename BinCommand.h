//BinCommand.h
//base class for binary ops (+,-,*,/,%)
#ifndef BINCOMMAND_H
#define BINCOMMAND_H
#include "Command.h"
#include "Stack.h"

class BinCommand : public Command{
  public:
	BinCommand(Stack<int> & passedS); //cons
	bool execute(void); //pops two top nums off stack, evaulate into results,push result
  	virtual int evaluate(int num1, int num2) const = 0; //evauluate based on op
	virtual int p(); //precedence -> returns recedence val for given operator
	virtual std::string val(); //returns string value operator
  protected:
	Stack <int> & s;
};
#endif
