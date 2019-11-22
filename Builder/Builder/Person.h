#pragma once
#include <string>

class Person
{
public:
	explicit Person();
	explicit Person(const std::string name);
	~Person();
	void setName(const std::string name);
	void setHead(const std::string head);
	void setBody(const std::string body);
	void setLeftArm(const std::string leftArm);
	void setRightArm(const std::string rightArm);
	void setLeftLeg(const std::string leftLeg);
	void setRightLeg(const std::string rightLeg);
	void show() const;

private:
	std::string m_name;
	std::string m_head;
	std::string m_body;
	std::string m_leftArm;
	std::string m_rightArm;
	std::string m_leftLeg;
	std::string m_rightLeg;
};

