#include "Person.h"
#include <iostream>

Person::Person() :
	m_name(),
	m_head(),
	m_body(),
	m_leftArm(),
	m_rightArm(),
	m_leftLeg(),
	m_rightLeg()
{
}

Person::Person(const std::string name) :
	m_name(name),
	m_head(),
	m_body(),
	m_leftArm(),
	m_rightArm(),
	m_leftLeg(),
	m_rightLeg()
{
}

Person::~Person()
{
}

void Person::setName(const std::string name)
{
	m_name = name;
}

void Person::setHead(const std::string head)
{
	m_head = head;
}

void Person::setBody(const std::string body)
{
	m_body = body;
}

void Person::setLeftArm(const std::string leftArm)
{
	m_leftArm = leftArm;
}

void Person::setRightArm(const std::string rightArm)
{
	m_rightArm = rightArm;
}

void Person::setLeftLeg(const std::string leftLeg)
{
	m_leftLeg = leftLeg;
}

void Person::setRightLeg(const std::string rightLeg)
{
	m_rightLeg = rightLeg;
}

void Person::show() const
{
	std::cout << "Person name: " << m_name <<
		"\n------ head: " << m_head <<
		"\n------ body: " << m_body <<
		"\n------ left arm: " << m_leftArm <<
		"\n------ right arm: " << m_rightArm <<
		"\n------ left leg: " << m_leftLeg <<
		"\n------ right leg: " << m_rightLeg << std::endl;
}