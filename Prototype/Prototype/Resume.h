#pragma once
#include <string>
#include "PersonalInfo.h"
#include "WorkExperience.h"

class Resume
{
public:
	Resume();
	~Resume();
	void setPersonalInfo(const PersonalInfo& personalInfo);
	PersonalInfo getPersonalInfo() const;
	void setWorkExperience(const WorkExperience& workExperience);
	WorkExperience getWorkExperience() const;

private:
	PersonalInfo m_personalInfo;
	WorkExperience m_workExperience;
};

