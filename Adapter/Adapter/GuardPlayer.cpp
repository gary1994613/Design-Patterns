#include "GuardPlayer.h"
#include <iostream>

GuardPlayer::GuardPlayer(std::string name) :
	m_name(name)
{
	std::cout << "Ctor " << m_name << std::endl;
}

GuardPlayer::~GuardPlayer()
{
	std::cout << "Dtor " << m_name << std::endl;
}

void GuardPlayer::offense()
{
	std::cout << m_name << " offense" << std::endl;
}

void GuardPlayer::defense()
{
	std::cout << m_name << " defense" << std::endl;
}