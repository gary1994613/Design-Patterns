#pragma once
#include <string>
#include "IPlayer.h"

class ForwardPlayer : public IPlayer
{
public:
	explicit ForwardPlayer(std::string name);
	~ForwardPlayer();
	void offense() override;
	void defense() override;

private:
	std::string m_name;

};

