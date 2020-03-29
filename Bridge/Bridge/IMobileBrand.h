#pragma once
#include "IMobileApp.h"

class IMobileBrand
{
public:
	virtual ~IMobileBrand() {};
	virtual void run() = 0;
	void setMobileApp(IMobileApp* mobileApp) { m_mobileApp = mobileApp; };

protected:
	IMobileApp* m_mobileApp;
};

