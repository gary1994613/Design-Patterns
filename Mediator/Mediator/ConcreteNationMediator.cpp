#include "ConcreteNationMediator.h"
#include <iostream>


UnitedNations::UnitedNations() : 
	m_unitedStates(nullptr),
	m_japan(nullptr),
	m_germany(nullptr)
{
	std::cout << "Ctor of UnitedNations" << std::endl;
}

UnitedNations::~UnitedNations()
{
	std::cout << "Dtor of UnitedNations" << std::endl;
}

void UnitedNations::send(IColleague* nation, std::string message)
{
	std::cout << "UnitedNations got message, forwarding..." << std::endl;

	if (nation == m_unitedStates)
	{
		m_japan->notifiedMessage(message);
		m_germany->notifiedMessage(message);
	}
	else if (nation == m_japan)
	{
		m_unitedStates->notifiedMessage(message);
		m_germany->notifiedMessage(message);
	}
	else if (nation == m_germany)
	{
		m_unitedStates->notifiedMessage(message);
		m_japan->notifiedMessage(message);
	}
}

void UnitedNations::setColleagueUnitedStates(UnitedStates* unitedStates)
{
	m_unitedStates = unitedStates;
}

void UnitedNations::setColleagueJapan(Japan* japan)
{
	m_japan = japan;
}

void UnitedNations::setColleagueGermany(Germany* germany)
{
	m_germany = germany;
}


WorldTradeOrganization::WorldTradeOrganization() :
	m_unitedStates(nullptr),
	m_japan(nullptr),
	m_germany(nullptr)
{
	std::cout << "Ctor of WorldTradeOrganization" << std::endl;
}

WorldTradeOrganization::~WorldTradeOrganization()
{
	std::cout << "Dtor of WorldTradeOrganization" << std::endl;
}

void WorldTradeOrganization::send(IColleague* nation, std::string message)
{
	std::cout << "WorldTradeOrganization got message, forwarding..." << std::endl;

	if (nation == m_unitedStates)
	{
		m_japan->notifiedMessage(message);
		m_germany->notifiedMessage(message);
	}
	else if (nation == m_japan)
	{
		m_unitedStates->notifiedMessage(message);
		m_germany->notifiedMessage(message);
	}
	else if (nation == m_germany)
	{
		m_unitedStates->notifiedMessage(message);
		m_japan->notifiedMessage(message);
	}
}

void WorldTradeOrganization::setColleagueUnitedStates(UnitedStates* unitedStates)
{
	m_unitedStates = unitedStates;
}

void WorldTradeOrganization::setColleagueJapan(Japan* japan)
{
	m_japan = japan;
}

void WorldTradeOrganization::setColleagueGermany(Germany* germany)
{
	m_germany = germany;
}
