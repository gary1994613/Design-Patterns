#pragma once
#include "IMobileBrand.h"

class MobileBrandA : public IMobileBrand
{
public:
	MobileBrandA();
	~MobileBrandA();
	void run() override;
};

class MobileBrandB : public IMobileBrand
{
public:
	MobileBrandB();
	~MobileBrandB();
	void run() override;
};
