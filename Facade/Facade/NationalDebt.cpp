#include "NationalDebt.h"
#include <iostream>


NationalDebt::NationalDebt(std::string name) :
	m_name(name)
{
	std::cout << "Ctor NationalDebt" << std::endl;
}

NationalDebt::~NationalDebt()
{
	std::cout << "Dtor NationalDebt" << std::endl;
}

void NationalDebt::buy()
{
	std::cout << "buy NationalDebt " << m_name << std::endl;
}

void NationalDebt::sell()
{
	std::cout << "sell NationalDebt " << m_name << std::endl;
}