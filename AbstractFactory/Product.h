#pragma once
//Product.h

#ifndef _PRODUCT_H_
#define _PRODUCT_H_
class AbstractProductA {
public:
	virtual ~AbstractProductA();
	protected:  AbstractProductA();
private:
};
class ProductA1 :public AbstractProductA {
public:  ProductA1();
		 ~ProductA1();
protected:
private:

};
class ProductA2 :public AbstractProductA {
public:  ProductA2();
		 ~ProductA2();
protected:
private:
};
class ProductA3 :public AbstractProductA {
public:  ProductA3();
		 ~ProductA3();
protected:
private:
};


class AbstractProductB {
public:  
	virtual ~AbstractProductB();
	protected:  AbstractProductB();
private:
};

class ProductB1 :public AbstractProductB {
public:  ProductB1();
		 ~ProductB1();
protected:
private:
};
class ProductB2 :public AbstractProductB {
public:  ProductB2();
		 ~ProductB2();
protected:
private:
};

class ProductB3 :public AbstractProductB {
public:  ProductB3();
		 ~ProductB3();
protected:
private:
};



#endif