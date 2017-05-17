//main.cpp 
#include "Factory.h" 
#include "Product.h" 
#include <iostream> 
using namespace std; 
int main(int argc, char* argv[]) {
	
	Factory* fac = new ConcreteFactory<firstClass>();
	Product* p = fac->CreateProduct();
	
	fac = new ConcreteFactory<secondClass>();
	p = fac->CreateProduct();

	fac = new ConcreteFactory<thirdClass>();
	p = fac->CreateProduct();
	return 0;
}