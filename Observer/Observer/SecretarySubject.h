#pragma once
#include <string>
#include <list> 
#include "ISubject.h"

class SecretarySubject : public ISubject
{
public:
	explicit SecretarySubject(std::string name);
	~SecretarySubject();
	void attach(IObserver* observer) override;
	void detach(IObserver* observer) override;
	void notify() override;

private:
	std::string m_name;
	std::list<IObserver*> m_list;
};