#pragma once

class IPlayer
{
public:
	virtual ~IPlayer() {};
	virtual void offense() = 0;
	virtual void defense() = 0;
};

