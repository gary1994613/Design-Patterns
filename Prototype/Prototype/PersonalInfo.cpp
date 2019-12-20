#include "PersonalInfo.h"


PersonalInfo::PersonalInfo() :
	m_name(""),
	m_nickName(""),
	m_gender(""),
	m_birthday(""),
	m_age(-1)
{
}

PersonalInfo::PersonalInfo(const std::string name, const std::string nickName, const std::string gender, const std::string birthday, const int age) :
	m_name(name),
	m_nickName(nickName),
	m_gender(gender),
	m_birthday(birthday),
	m_age(age)
{
}

PersonalInfo::~PersonalInfo()
{
}

PersonalInfo* PersonalInfo::clone()
{
	return new PersonalInfo(m_name, m_nickName, m_gender, m_birthday, m_age);
}