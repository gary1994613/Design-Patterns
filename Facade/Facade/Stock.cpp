#include "Stock.h"
#include <iostream>


Stock::Stock(std::string name) : 
	m_name(name)
{
	std::cout << "Ctor Stock" << std::endl;
}

Stock::~Stock()
{
	std::cout << "Dtor Stock" << std::endl;
}

void Stock::buy()
{
	std::cout << "buy Stock " << m_name << std::endl;
}

void Stock::sell()
{
	std::cout << "sell Stock " << m_name << std::endl;
}