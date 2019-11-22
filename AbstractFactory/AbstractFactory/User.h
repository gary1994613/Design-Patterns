#pragma once
#include <string>

class User
{
public:
	explicit User();
	explicit User(const int id, const std::string name);
	~User();
	void setId(const int id);
	int getId() const;
	void setName(const std::string name);
	std::string getName() const;

private:
	int m_id;
	std::string m_name;
};

