#pragma once
//AbstractionImp.h 
#ifndef _ABSTRACTIONIMP_H_ 
#define _ABSTRACTIONIMP_H_ 

#include <iostream>
using namespace std;

class AbstractionImp {
public:  virtual ~AbstractionImp();
		 virtual void Operation() = 0;
protected:  AbstractionImp();
private:
};

class ConcreteAbstractionImpA :public AbstractionImp {
public:  ConcreteAbstractionImpA();
		 ~ConcreteAbstractionImpA();
		 virtual void Operation();
protected:   private:
};

class ConcreteAbstractionImpB :public AbstractionImp {
public:
	ConcreteAbstractionImpB();
	~ConcreteAbstractionImpB();
	virtual void Operation();
protected:   private:
};

AbstractionImp::AbstractionImp() {
}
AbstractionImp::~AbstractionImp() {
}
void AbstractionImp::Operation() { cout << "AbstractionImp....imp..." << endl; }
ConcreteAbstractionImpA::ConcreteAbstractionImpA() { }
ConcreteAbstractionImpA::~ConcreteAbstractionImpA() { }
void ConcreteAbstractionImpA::Operation() { cout << "ConcreteAbstractionImpA...." << endl; }
ConcreteAbstractionImpB::ConcreteAbstractionImpB() { }
ConcreteAbstractionImpB::~ConcreteAbstractionImpB() { }
void ConcreteAbstractionImpB::Operation() { cout << "ConcreteAbstractionImpB...." << endl; }

#endif //~_ABSTRACTIONIMP_H_ 