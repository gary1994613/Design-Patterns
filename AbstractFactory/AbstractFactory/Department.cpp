#include "Department.h"
#include <iostream>

Department::Department() :
	m_id(-1), m_name("")
{
	std::cout << "Ctor Department" << std::endl;
}

Department::Department(const int id, const std::string name) :
	m_id(id), m_name(name)
{
	std::cout << "Ctor Department id: " << m_id <<
		", name: " << m_name << std::endl;
}

Department::~Department()
{
	std::cout << "Dtor Department id: " << m_id <<
		", name: " << m_name << std::endl;
}

void Department::setId(const int id)
{
	m_id = id;
}

int Department::getId() const
{
	return m_id;
}

void Department::setName(const std::string name)
{
	m_name = name;
}

std::string Department::getName() const
{
	return m_name;
}
