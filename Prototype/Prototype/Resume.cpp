#include "Resume.h"
#include <iostream>

Resume::Resume()
{
	std::cout << "Ctor" << std::endl;
}

Resume::~Resume()
{
	std::cout << "Dtor" << std::endl;
}

void Resume::setPersonalInfo(const PersonalInfo& personalInfo)
{
	m_personalInfo = personalInfo;
}

PersonalInfo Resume::getPersonalInfo() const
{
	return m_personalInfo;
}

void Resume::setWorkExperience(const WorkExperience& workExperience)
{
	m_workExperience = workExperience;
}

WorkExperience Resume::getWorkExperience() const
{
	return m_workExperience;
}