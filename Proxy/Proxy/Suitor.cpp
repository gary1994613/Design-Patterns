#include "Suitor.h"
#include <iostream>


Suitor::Suitor(std::string name, Girl *girl) :
	m_name(name),
	m_girl(girl)
{
	std::cout << "Ctor Suitor " << m_name << std::endl;
}

Suitor::~Suitor()
{
	std::cout << "Dtor Suitor " << m_name << std::endl;
}

void Suitor::SendFlowers()
{
	std::cout << m_name << " sends flowers to " << m_girl->getName() << std::endl;
}

void Suitor::SendCard()
{
	std::cout << m_name << " sends card to " << m_girl->getName() << std::endl;
}

void Suitor::SendChocolate()
{
	std::cout << m_name << " sends chocolate to " << m_girl->getName() << std::endl;
}