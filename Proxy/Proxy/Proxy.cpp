#include "Proxy.h"
#include <iostream>


Proxy::Proxy(std::string name, Suitor *suitor) :
	m_name(name),
	m_suitor(suitor)
{
	std::cout << "Ctor Proxy" << std::endl;
}

Proxy::~Proxy()
{
	std::cout << "Dtor Proxy" << std::endl;
}

void Proxy::SendFlowers()
{
	m_suitor->SendFlowers();
}

void Proxy::SendCard()
{
	m_suitor->SendCard();
}

void Proxy::SendChocolate()
{
	m_suitor->SendChocolate();
}