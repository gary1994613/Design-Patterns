#pragma once
class IMobileApp
{
public:
	virtual ~IMobileApp() {};
	virtual void run() = 0;
};