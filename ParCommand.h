#ifndef PARCOMMAND_H
#define PARCOMMAND_H

// COMMENT: Create a design that does not require having parenthesis as
// as command object since parenthesis are not executed.
//RESPONSE I was unable to think of a design that did not use the () as an object
//that did not have bugs or multiple stacks. I prioritized a functioning calculator,
//however for future assignments I believe it is best if I remove () from the command
//stucture.
class ParCommand : public Command{
  public: 
	bool execute();
	int p();
	std::string val();
  private:
	

};
#endif
