#include "NBAObserver.h"
#include <iostream>

NBAObserver::NBAObserver(std::string name) :
	m_name(name)
{
	std::cout << "Ctor from " << m_name << std::endl;
}

NBAObserver::~NBAObserver()
{
	std::cout << "Dtor from " << m_name << std::endl;
}

void NBAObserver::update()
{
	std::cout << "Updated from " << m_name << std::endl;
}