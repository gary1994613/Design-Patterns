#include "User.h"
#include <iostream>

User::User() :
	m_id(-1), m_name("")
{
	std::cout << "Ctor User" << std::endl;
}

User::User(const int id, const std::string name) :
	m_id(id), m_name(name)
{
	std::cout << "Ctor User id: " << m_id <<
		", name: " << m_name << std::endl;
}

User::~User()
{
	std::cout << "Dtor User id: " << m_id <<
		", name: " << m_name << std::endl;
}

void User::setId(const int id)
{
	m_id = id;
}

int User::getId() const
{
	return m_id;
}

void User::setName(const std::string name)
{
	m_name = name;
}

std::string User::getName() const
{
	return m_name;
}
