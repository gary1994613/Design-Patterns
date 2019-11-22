#pragma once
#include <string>
#include <list> 
#include "ISubject.h"

class BossSubject : public ISubject
{
public:
	explicit BossSubject(std::string name);
	~BossSubject();
	void attach(IObserver* observer) override;
	void detach(IObserver* observer) override;
	void notify() override;

private:
	std::string m_name;
	std::list<IObserver*> m_list;
};

