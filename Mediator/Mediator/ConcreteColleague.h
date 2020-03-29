#pragma once
#include "IColleague.h"
#include "INationMediator.h"

class UnitedStates : public IColleague
{
public:
	UnitedStates();
	~UnitedStates();
	void setMediator(INationMediator* nationMediator);
	void sendMessage(std::string message) override;
	void notifiedMessage(std::string message) override;

private:
	INationMediator* m_nationMediator;
};

class Japan : public IColleague
{
public:
	Japan();
	~Japan();
	void setMediator(INationMediator* nationMediator);
	void sendMessage(std::string message) override;
	void notifiedMessage(std::string message) override;

private:
	INationMediator* m_nationMediator;
};

class Germany : public IColleague
{
public:
	Germany();
	~Germany();
	void setMediator(INationMediator* nationMediator);
	void sendMessage(std::string message) override;
	void notifiedMessage(std::string message) override;

private:
	std::string m_name;
	INationMediator* m_nationMediator;
};