#include "BossSubject.h"
#include <iostream>

BossSubject::BossSubject(std::string name) :
	m_name(name)
{
	std::cout << "Ctor from " << m_name << std::endl;
}

BossSubject::~BossSubject()
{
	std::cout << "Dtor from " << m_name << std::endl;
}

void BossSubject::attach(IObserver* observer)
{
	m_list.push_back(observer);
}

void BossSubject::detach(IObserver* observer)
{
	m_list.remove(observer);
}

void BossSubject::notify()
{
	std::cout << "Notified from " << m_name << std::endl;

	for (IObserver* observer : m_list)
		observer->update();
}
