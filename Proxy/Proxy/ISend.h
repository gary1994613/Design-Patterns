#pragma once


class ISend
{
public:
	virtual ~ISend() {};
	virtual void SendFlowers() = 0;
	virtual void SendCard() = 0;
	virtual void SendChocolate() = 0;
};

