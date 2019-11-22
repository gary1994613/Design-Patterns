#pragma once
#include "IPersonFactory.h"

class UndergraduateFactory : public IPersonFactory
{
public:
	std::unique_ptr<IPerson> createPerson(const std::string name) override;
};


class VolunteerFactory : public IPersonFactory
{
public:
	std::unique_ptr<IPerson> createPerson(const std::string name) override;
};
