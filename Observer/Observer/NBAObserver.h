#pragma once
#include <string>
#include "IObserver.h"

class NBAObserver : public IObserver
{
public:
	explicit NBAObserver(std::string name);
	~NBAObserver();
	void update() override;

private:
	std::string m_name;
};

