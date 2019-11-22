#include "CenterPlayer.h"
#include <iostream>

CenterPlayer::CenterPlayer(std::string name) :
	m_name(name)
{
	std::cout << "Ctor " << m_name << std::endl;
}

CenterPlayer::~CenterPlayer()
{
	std::cout << "Dtor " << m_name << std::endl;
}

void CenterPlayer::offense()
{
	std::cout << m_name << " offense" << std::endl;
}

void CenterPlayer::defense()
{
	std::cout << m_name << " defense" << std::endl;
}