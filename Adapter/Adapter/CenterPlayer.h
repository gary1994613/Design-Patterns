#pragma once
#include <string>
#include "IPlayer.h"

class CenterPlayer : public IPlayer
{
public:
	explicit CenterPlayer(std::string name);
	~CenterPlayer();
	void offense() override;
	void defense() override;

private:
	std::string m_name;
};


