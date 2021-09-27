//Command.h 
//base for all commands
#ifndef COMMAND_H
#define COMMAND_H

class Command{
  public:
	virtual bool execute(void) = 0;
	virtual int p() = 0;
	virtual std::string val() = 0;
};
#endif
