#pragma once

class IAnimalPrototype
{
public:
	virtual ~IAnimalPrototype() {};
	virtual IAnimalPrototype* clone() = 0;
};

