#pragma once
#include <string>
#include "IColleague.h"

class INationMediator
{
public:
	virtual ~INationMediator() {};
	virtual void send(IColleague* nation, std::string message) = 0;
};

