#pragma once
//Factory.h 
#ifndef _FACTORY_H_ 
#define _FACTORY_H_ 
#include "Product.h" 
#include <iostream>
using namespace std;
class Product;
class Factory {
public:  virtual ~Factory() = 0;
		 virtual Product* CreateProduct() = 0;
protected:  Factory();
private:
};

template<typename T>
class ConcreteFactory :public Factory {
public:
	~ConcreteFactory();
	ConcreteFactory();
	
	Product* CreateProduct();
protected:
private:
};

Factory::Factory() {
}
Factory::~Factory() {
}

template<class T>
ConcreteFactory<T>::ConcreteFactory() {
	cout << "ConcreteFactory....." << endl;
	//new T();
}
template<class T>
ConcreteFactory<T>::~ConcreteFactory() {

}

template<class T>
Product* ConcreteFactory<T>::CreateProduct() {

	return new T();
}



class firstClass:public Product {
public:
	firstClass() {
		cout << "firstClass ..." << endl;
	}
	~firstClass()
	{};
};
class secondClass:public Product {
public:
	secondClass() {
		cout << "secondClass ..." << endl;
	}
	~secondClass() { };

};
class thirdClass:public Product {
public:
	thirdClass() {
		cout << "thirdClass ..." << endl;
	}
	~thirdClass() {};
};

#endif //~_FACTORY_H_ 