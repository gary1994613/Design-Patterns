#pragma once
#include <string>
#include "IPlayer.h"

class GuardPlayer : public IPlayer
{
public:
	explicit GuardPlayer(std::string name);
	~GuardPlayer();
	void offense() override;
	void defense() override;

private:
	std::string m_name;
};