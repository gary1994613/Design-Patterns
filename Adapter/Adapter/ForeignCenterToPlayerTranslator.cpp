#include "ForeignCenterToPlayerTranslator.h"
#include <iostream>

ForeignCenterToPlayerTranslator::ForeignCenterToPlayerTranslator(std::string name, ForeignCenter* foreignCenter) :
	m_name(name), m_foreignCenter(foreignCenter)
{
	std::cout << "Ctor " << m_name << std::endl;
}

ForeignCenterToPlayerTranslator::~ForeignCenterToPlayerTranslator()
{
	std::cout << "Dtor " << m_name << std::endl;
}

void ForeignCenterToPlayerTranslator::offense()
{
	m_foreignCenter->attack();
}

void ForeignCenterToPlayerTranslator::defense()
{
	m_foreignCenter->protect();
}