#include<iostream>
#include<memory>
#include<sstream>
#include "ExpNode.h"

#include "./stack/Array_Base.h"
#include "./stack/Array.h"
#include "./stack/Stack.h"

#include "BinExpNode.cpp"
#include "NumNode.cpp"
#include "SubNode.cpp"
#include "AddNode.cpp"
#include "DivNode.cpp"
#include "MultNode.cpp"
#include "ModNode.cpp"
#include "EvalExpTree.cpp"
#include "TreeBuilder.cpp"
#include "Tree.cpp"

std::shared_ptr<ExpNode> postfix_tree(Array<std::string> pf);
void infix_postfix(std::string infix, Array<std::string> & pf);
int p(std::string op);

int main(){

//####### Calculator Testing #######
  //get infix exp
  bool calcContinue = true;
  while(calcContinue){
	std::string expression;
	std::cout << "Enter in expression:" << std::endl;
	std::getline(std::cin, expression); //get infix expression

	if(expression == "QUIT"){  //calc stops
	  calcContinue = false;
	  break;
	}
	
	try{
        // COMMENT: Do not go from infix to postfix then to tree. Instead,
        // go directly from infix to tree. The extra step is not necessary.
        // This will change a LOT of your parsing logic below because the
        // concrete builder should contain all the build logic. The client
        // should not be aware of how the expression tree is constructed.
        // RESPONSE: I was unable to implement a system that correctly functioned using
        // the infix to tree method. I decided to prioritze correct execution in this case.
        
	  //convert infix to postfix
	  Array<std::string> pf;
	  infix_postfix(expression, pf);

	  //convert postfix to tree
	  std::shared_ptr<ExpNode> expTree = postfix_tree(pf);
	  //evaluate tree
	  EvalExpTree calc;
	  expTree->accept(calc);
	  std::cout<< calc.getResult() << std::endl;	
	}catch(...){
	  std::cout<< "Invalid Expression" << std::endl;
	}
  } //end calc

return 0;
}

//converts postfix exp to tree
std::shared_ptr<ExpNode> postfix_tree(Array<std::string> pf){
 
  //builder
  TreeBuilder b = TreeBuilder();
  b.startExp(); //start of new tree
 
  for(int i = 0; pf[i] != ""; i++){ //iterate postfix array until reach empty space
	std::string token = pf[i];
	//cases
	if(token == "+")
	  b.buildAddOp();
	else if(token == "-")
	  b.buildSubOp();
	else if(token == "*")
	  b.buildMultOp();
	else if(token == "/")
	  b.buildDivOp();
	else if (token == "%")
	  b.buildModOp();
	else if(token == "(")
	  b.buildOpenP();
	else if(token == ")")
	  b.buildCloseP();
	else{  //case number
	  b.buildNum(std::stoi(token));
	}
  } //end for
  //return root of exp tree 
  return b.getExp();
} //end postfix_tree

//infix to postfix
void infix_postfix(std::string infix, Array<std::string> & postfix){
  //input parse
  std::istringstream input(infix);
  std::string token;
  //stack/postfix array
  Stack<std::string> temp;
  int pos = 0;
 
  //create stack from infix
  while(std::getline(input, token, ' ')){
	std::string type;
	if(token == "+" || token == "-" || token == "*" || token == "/" || token == "%"){
	  type = "operator";
	  if(temp.is_empty()) //stack empty
		temp.push(token);
	  else{ //stack not empty
		if(p(token) > p(temp.top())) //if higher priority
		  temp.push(token);
		else{ //p <= top
		  //pop from stack
		  bool keepGoing = true;
		  while(keepGoing){
		    postfix[pos] = temp.pop();
		    pos++;
		    if(temp.is_empty() || p(token) > p(temp.top()))
			keepGoing = false;
		  } //end while
		  temp.push(token);
		}
	  }	
	}
	else if(token == "("){ //case open P
	  temp.push(token);
	} 
	else if(token == ")"){ //case close P
	  bool keepGoing = true;
	  //pop elements until find matching open P
	  while(keepGoing){
		std::string top = temp.pop();
		if(top == "(")
		  keepGoing = false;
		else{ //append to postfix 
		  postfix[pos] = top;
		  pos++;
		}
	  }
	} //end case close P
	else{ //case NUM
	  postfix[pos] = token; //append to postfix
	  pos++;
	} //end case NUM	
  } //end parse
  //pop stack + append to postfix
  while(!temp.is_empty()){
	std::string top = temp.pop();
	postfix[pos] = top;
	pos++;
  } //end while
} //end infix_postfix
//prec
int p(std::string op){
  if(op == "*" || op == "/" || op == "%")
	return 2; //highest prec
  else if(op == "+" || op == "-")
	return 1; //2nd tier prec
  else
	return 0;  
}





