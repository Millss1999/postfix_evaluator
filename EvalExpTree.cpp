#include "EvalExpTree.h"
//cons
EvalExpTree::EvalExpTree()
: result (0)
{}

//visit add
int EvalExpTree::visitAdd(AddNode & node){
  //add node -- two children
    // COMMENT: You are not using the visitor pattern correctly.
    // Instead, you have mixed the visitor with the composite version
    // of evaluate. You are to visit the left and right node via the
    // accept method to correctly implement the visitor pattern.
    // (e.g., left->accept (*this))
    // RESPONSE: Correctly implemented the visitor pattern using the accept method.
    
  //new version
  int l = 0;
  int r = 0;
  //visit left
  l = node.getL()->accept(*this);
  //visit right
  r = node.getR()->accept(*this);
  //add
  result = l + r;
 
  return l + r; 
   
}

//visit sub
int EvalExpTree::visitSub(SubNode & node){
    // COMMENT: You are not using the visitor pattern correctly.
    // Instead, you have mixed the visitor with the composite version
    // of evaluate. You are to visit the left and right node via the
    // accept method to correctly implement the visitor pattern.
    // (e.g., left->accept (*this))
    // RESPONSE: Correctly implemented the vistor pattern using the accept method
  int l = 0;
  int r = 0; 

  l = node.getL()->accept(*this);
  r = node.getR()->accept(*this);   
  //sub
  result = r - l; 

  return r - l;
}

//visit mult
int EvalExpTree::visitMult(MultNode & node){
    // COMMENT: You are not using the visitor pattern correctly.
    // Instead, you have mixed the visitor with the composite version
    // of evaluate. You are to visit the left and right node via the
    // accept method to correctly implement the visitor pattern.
    // (e.g., left->accept (*this))
    // RESPONSE: Correctly implemented the visitor pattern via accept method
  int l = 0;
  int r = 0; 
  
  l = node.getL()->accept(*this);
  r = node.getR()->accept(*this);   
  result = l * r;
 
  return l * r;
}

//visit div
int EvalExpTree::visitDiv(DivNode & node){
    // COMMENT: You are not using the visitor pattern correctly.
    // Instead, you have mixed the visitor with the composite version
    // of evaluate. You are to visit the left and right node via the
    // accept method to correctly implement the visitor pattern.
    // (e.g., left->accept (*this))
    // RESPONSE: Correctly implemented vistor pattern via accept method
  int l = 0;
  int r = 0;

  l = node.getL()->accept(*this);
  r = node.getR()->accept(*this);

  result = l / r;
 
  return l / r; 
}

//visit mod
int EvalExpTree::visitMod(ModNode & node){
    // COMMENT: You are not using the visitor pattern correctly.
    // Instead, you have mixed the visitor with the composite version
    // of evaluate. You are to visit the left and right node via the
    // accept method to correctly implement the visitor pattern.
    // (e.g., left->accept (*this))
    // RESPONSE: Correctly implemented the vistor pattern via accept method
  int l = 0;
  int r = 0;

  l = node.getL()->accept(*this);
  r = node.getR()->accept(*this);
  result = r % l;

  return r % l;
}

//visit num

int EvalExpTree::visitNum(NumNode & node){
    // COMMENT: You are not using the visitor pattern correctly.
    // Instead, you have mixed the visitor with the composite version
    // of evaluate. You are to visit the left and right node via the
    // accept method to correctly implement the visitor pattern.
    // (e.g., left->accept (*this))
    // RESPONSE: Correctly implemented visitor pattern via accept.
    // In the case with 0 children (operand), the number will be returned 
    
  return node.eval(); //returns leaf number
}

//result
int EvalExpTree::getResult(){
  return this->result;
}

