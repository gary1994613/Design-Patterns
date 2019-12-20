#include "Sheep.h"
#include <iostream>

Sheep::Sheep()
{
	std::cout << "Ctor Sheep" << std::endl;
}

Sheep::~Sheep()
{
	std::cout << "Dtor Sheep" << std::endl;
}
	
IAnimalPrototype* Sheep::clone()
{
	return new Sheep(*this);
}