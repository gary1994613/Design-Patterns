#include "WorkExperience.h"

WorkExperience::WorkExperience() :
	m_company(""),
	m_position(""),
	m_jobDescription(""),
	m_lengthOfService(-1)
{
}

WorkExperience::WorkExperience(const std::string company, const std::string position, const std::string jobDescription, const int lengthOfService) :
	m_company(company),
	m_position(position),
	m_jobDescription(jobDescription),
	m_lengthOfService(lengthOfService)
{
}

WorkExperience::~WorkExperience()
{
}

WorkExperience* WorkExperience::clone()
{
	return new WorkExperience(m_company, m_position, m_jobDescription, m_lengthOfService);
}