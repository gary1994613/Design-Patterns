#include "ConcreteColleague.h"
#include <iostream>


UnitedStates::UnitedStates() :
	m_nationMediator(nullptr)
{
	std::cout << "Ctor of UnitedStates" << std::endl;
}

UnitedStates::~UnitedStates()
{
	std::cout << "Dtor of UnitedStates" << std::endl;
}

void UnitedStates::setMediator(INationMediator* nationMediator)
{
	m_nationMediator = nationMediator;
}

void UnitedStates::sendMessage(std::string message)
{
	std::cout << "UnitedStates sends message: " << message << std::endl;
	m_nationMediator->send(this, message);
}

void UnitedStates::notifiedMessage(std::string message)
{
	std::cout << "UnitedStates is notified with message: " << message << std::endl;
}


Japan::Japan() :
	m_nationMediator(nullptr)
{
	std::cout << "Ctor of Japan" << std::endl;
}
	
Japan::~Japan()
{
	std::cout << "Dtor of Japan" << std::endl;
}

void Japan::setMediator(INationMediator* nationMediator)
{
	m_nationMediator = nationMediator;
}

void Japan::sendMessage(std::string message)
{
	std::cout << "Japan sends message: " << message << std::endl;
	m_nationMediator->send(this, message);
}
	
void Japan::notifiedMessage(std::string message) 
{
	std::cout << "Japan is notified with message: " << message << std::endl;
}


Germany::Germany() :
	m_nationMediator(nullptr)
{
	std::cout << "Ctor of Germany" << std::endl;
}

Germany::~Germany()
{
	std::cout << "Dtor of Germany" << std::endl;
}

void Germany::setMediator(INationMediator* nationMediator)
{
	m_nationMediator = nationMediator;
}

void Germany::sendMessage(std::string message)
{
	std::cout << "Germany sends message: " << message << std::endl;
	m_nationMediator->send(this, message);
}

void Germany::notifiedMessage(std::string message)
{
	std::cout << "Germany is notified with message: " << message << std::endl;
}