#pragma once
#include "INationMediator.h"
#include "ConcreteColleague.h"

class UnitedNations : public INationMediator
{
public:
	UnitedNations();
	~UnitedNations();
	void send(IColleague* nation, std::string message) override;
	void setColleagueUnitedStates(UnitedStates* unitedStates);
	void setColleagueJapan(Japan* japan);
	void setColleagueGermany(Germany* germany);

private:
	UnitedStates* m_unitedStates;
	Japan* m_japan;
	Germany* m_germany;
};

class WorldTradeOrganization : public INationMediator
{
public:
	WorldTradeOrganization();
	~WorldTradeOrganization();
	void send(IColleague* nation, std::string message) override;
	void setColleagueUnitedStates(UnitedStates* unitedStates);
	void setColleagueJapan(Japan* japan);
	void setColleagueGermany(Germany* germany);

private:
	UnitedStates* m_unitedStates;
	Japan* m_japan;
	Germany* m_germany;
};
