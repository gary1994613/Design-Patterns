#include "SecretarySubject.h"
#include <iostream>

SecretarySubject::SecretarySubject(std::string name) :
	m_name(name)
{
	std::cout << "Ctor from " << m_name << std::endl;
}

SecretarySubject::~SecretarySubject()
{
	std::cout << "Dtor from " << m_name << std::endl;
}

void SecretarySubject::attach(IObserver* observer)
{
	m_list.push_back(observer);
}

void SecretarySubject::detach(IObserver* observer)
{
	m_list.remove(observer);
}

void SecretarySubject::notify()
{
	std::cout << "Notified from " << m_name << std::endl;

	for (IObserver* observer : m_list)
		observer->update();
}
