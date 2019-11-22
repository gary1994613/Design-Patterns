#include "ConcretePersonBuilder.h"
#include <iostream>

ThinPersonBuilder::ThinPersonBuilder(const std::string builderName) :
	m_builderName(builderName), m_person(std::make_unique<Person>())
{
	std::cout << "Ctor " << m_builderName << std::endl;
}

ThinPersonBuilder::~ThinPersonBuilder()
{
	std::cout << "Dtor " << m_builderName << std::endl;
}

void ThinPersonBuilder::buildName(const std::string personName)
{
	m_person->setName(personName);
}

void ThinPersonBuilder::buildHead()
{
	m_person->setHead("thin head");
}

void ThinPersonBuilder::buildBody()
{
	m_person->setBody("thin body");
}

void ThinPersonBuilder::buildLeftArm()
{
	m_person->setLeftArm("thin left arm");
}

void ThinPersonBuilder::buildrRightArm()
{
	m_person->setRightArm("thin right arm");
}

void ThinPersonBuilder::buildLeftLeg()
{
	m_person->setLeftLeg("thin left leg");
}

void ThinPersonBuilder::buildRightLeg()
{
	m_person->setRightLeg("thin right leg");
}

std::unique_ptr<Person> ThinPersonBuilder::getPerson()
{
	return std::move(m_person);
}


FatPersonBuilder::FatPersonBuilder(const std::string builderName) :
	m_builderName(builderName), m_person(std::make_unique<Person>())
{
	std::cout << "Ctor " << m_builderName << std::endl;
}

FatPersonBuilder::~FatPersonBuilder()
{
	std::cout << "Dtor " << m_builderName << std::endl;
}

void FatPersonBuilder::buildName(const std::string personName)
{
	m_person->setName(personName);
}

void FatPersonBuilder::buildHead()
{
	m_person->setHead("fat head");
}

void FatPersonBuilder::buildBody()
{
	m_person->setBody("fat body");
}

void FatPersonBuilder::buildLeftArm()
{
	m_person->setLeftArm("fat left arm");
}

void FatPersonBuilder::buildrRightArm()
{
	m_person->setRightArm("fat right arm");
}

void FatPersonBuilder::buildLeftLeg()
{
	m_person->setLeftLeg("fat left leg");
}

void FatPersonBuilder::buildRightLeg()
{
	m_person->setRightLeg("fat right leg");
}

std::unique_ptr<Person> FatPersonBuilder::getPerson()
{
	return std::move(m_person);
}