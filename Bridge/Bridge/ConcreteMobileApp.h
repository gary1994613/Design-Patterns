#pragma once
#include "IMobileApp.h"

class MobileGame : public IMobileApp
{
public:
	MobileGame();
	~MobileGame();
	void run() override;
};

class MobileAddressBook : public IMobileApp
{
public:
	MobileAddressBook();
	~MobileAddressBook();
	void run() override;
};