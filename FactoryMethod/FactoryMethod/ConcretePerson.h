#pragma once
#include "IPerson.h"

class Undergraduate : public IPerson
{
public:
	explicit Undergraduate(std::string name);
	~Undergraduate();
};


class Volunteer : public IPerson
{
public:
	explicit Volunteer(std::string name);
	~Volunteer();
};