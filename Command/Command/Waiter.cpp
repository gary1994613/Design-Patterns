#include "Waiter.h"
#include <iostream>

Waiter::Waiter(std::string name) :
	m_name(name), m_commandList()
{
	std::cout << "Ctor " << m_name << std::endl;
}

Waiter::~Waiter()
{
	std::cout << "Dtor " << m_name << std::endl;
}

void Waiter::setOrder(ICommand* command)
{
	m_commandList.push_back(command);
}

void Waiter::cancelOrder(ICommand* command)
{
	m_commandList.remove(command);
}

void Waiter::clearOrder()
{
	m_commandList.clear();
}

void Waiter::notify()
{
	for (const auto& command : m_commandList)
		command->execute();
}
