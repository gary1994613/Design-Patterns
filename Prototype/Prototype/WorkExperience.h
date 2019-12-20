#pragma once
#include <string>

class WorkExperience
{
public:
	explicit WorkExperience();
	explicit WorkExperience(const std::string company, const std::string position, const std::string jobDescription, const int lengthOfService);
	~WorkExperience();
	WorkExperience* clone();

private:
	std::string m_company;
	std::string m_position;
	std::string m_jobDescription;
	int m_lengthOfService;
};

