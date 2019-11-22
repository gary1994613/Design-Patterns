#include "StockObserver.h"
#include <iostream>

StockObserver::StockObserver(std::string name) :
	m_name(name)
{
	std::cout << "Ctor from " << m_name << std::endl;
}

StockObserver::~StockObserver()
{
	std::cout << "Dtor from " << m_name << std::endl;
}

void StockObserver::update()
{
	std::cout << "Updated from " << m_name << std::endl;
}