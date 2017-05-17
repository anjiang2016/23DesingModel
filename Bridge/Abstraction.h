#pragma once
//Abstraction.h 
#ifndef _ABSTRACTION_H_ 
#define _ABSTRACTION_H_ 

#include "AbstractionImp.h" 
#include <iostream> 
using namespace std; 

class AbstractionImp;
class Abstraction {
public:  virtual ~Abstraction();
		 virtual void Operation() = 0;
protected:  Abstraction();
private:
};
class RefinedAbstraction :public Abstraction {
public:  RefinedAbstraction(AbstractionImp* imp);
		 ~RefinedAbstraction();
		 void Operation();
protected:
private:  AbstractionImp* _imp;
};


Abstraction::Abstraction() {
}
Abstraction::~Abstraction() {
}
RefinedAbstraction::RefinedAbstraction(AbstractionImp* imp) { _imp = imp; }
RefinedAbstraction::~RefinedAbstraction()
{
}
void RefinedAbstraction::Operation() { _imp->Operation(); }


#endif //~_ABSTRACTION_H_ 