#include "PersonDirector.h"
#include <iostream>

PersonDirector::PersonDirector(IPersonBuilder* personBuilder) :
	m_personBuilder(personBuilder)
{
	std::cout << "Ctor Person Director" << std::endl;
}

PersonDirector::~PersonDirector()
{
	std::cout << "Dtor Person Director" << std::endl;
}

void PersonDirector::setPersonBuilder(IPersonBuilder* personBuilder)
{
	m_personBuilder = personBuilder;
}

std::unique_ptr<Person> PersonDirector::buildPerson(const std::string personName)
{
	m_personBuilder->buildName(personName);
	m_personBuilder->buildHead();
	m_personBuilder->buildBody();
	m_personBuilder->buildLeftArm();
	m_personBuilder->buildrRightArm();
	m_personBuilder->buildLeftLeg();
	m_personBuilder->buildRightLeg();
	return m_personBuilder->getPerson();
}