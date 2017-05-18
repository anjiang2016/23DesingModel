#pragma once
//Singleton.h
#ifndef _SINGLETON_H_
#define _SINGLETON_H_
#include <iostream>
using namespace std;
class Singleton
{
public:
	static Singleton* Instance();
protected:
	Singleton();
private:
	static Singleton* _instance;
};

//Singleton.cpp
//#include "Singleton.h"

Singleton* Singleton::_instance = 0;
Singleton::Singleton()
{
	cout << "Singleton...." << endl;
}
Singleton* Singleton::Instance()
{
	if (_instance == 0)
	{
		_instance = new Singleton();
	}
	return _instance;
}


#endif //~_SINGLETON_H_ 