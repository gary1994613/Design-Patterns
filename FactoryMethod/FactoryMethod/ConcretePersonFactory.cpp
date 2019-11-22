#include "ConcretePersonFactory.h"
#include "ConcretePerson.h"

std::unique_ptr<IPerson> UndergraduateFactory::createPerson(const std::string name)
{
	return std::make_unique<Undergraduate>(name);
}


std::unique_ptr<IPerson> VolunteerFactory::createPerson(const std::string name)
{
	return std::make_unique<Volunteer>(name);
}