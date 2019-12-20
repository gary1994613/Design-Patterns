#pragma once
#include "IAnimalPrototype.h"

class Sheep : public IAnimalPrototype
{
public:
	Sheep();
	~Sheep();
	IAnimalPrototype* clone() override;
};