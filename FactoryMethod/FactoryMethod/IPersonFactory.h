#pragma once
#include <memory>
#include "IPerson.h"

class IPersonFactory
{
public:
	virtual std::unique_ptr<IPerson> createPerson(const std::string name) = 0;
};

