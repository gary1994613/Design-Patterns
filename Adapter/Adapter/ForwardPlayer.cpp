#include "ForwardPlayer.h"
#include <iostream>

ForwardPlayer::ForwardPlayer(std::string name) :
	m_name(name)
{
	std::cout << "Ctor " << m_name << std::endl;
}

ForwardPlayer::~ForwardPlayer()
{
	std::cout << "Dtor " << m_name << std::endl;
}

void ForwardPlayer::offense()
{
	std::cout << m_name << " offense" << std::endl;
}

void ForwardPlayer::defense()
{
	std::cout << m_name << " defense" << std::endl;
}