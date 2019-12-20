#pragma once
#include <iostream>

class PersonalInfo
{
public:
	explicit PersonalInfo();
	explicit PersonalInfo(const std::string name, const std::string nickName, const std::string gender, const std::string birthday, const int age);
	~PersonalInfo();
	PersonalInfo* clone();
	
private:
	std::string m_name;
	std::string m_nickName;
	std::string m_gender;
	std::string m_birthday;
	int m_age;
};

