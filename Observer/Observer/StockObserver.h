#pragma once
#include <string>
#include "IObserver.h"

class StockObserver : public IObserver
{
public:
	explicit StockObserver(std::string name);
	~StockObserver();
	void update() override;

private:
	std::string m_name;
};

