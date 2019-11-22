#pragma once
#include <string>

class Department
{
public:
	explicit Department();
	explicit Department(const int id, const std::string name);
	~Department();
	void setId(const int id);
	int getId() const;
	void setName(const std::string name);
	std::string getName() const;

private:
	int m_id;
	std::string m_name;
};