#include "Player.h"

Player::Player()
{
	m_Hp = 0;
	m_PosX = 0;
	m_PosY = 0;
	m_MoveSpeed = 0;
}

Player::~Player()
{

}

void Player::Exex()
{

}

void Player::Draw()
{

}

void Player::SetHp(int hp)
{
	m_Hp = hp;
}

void Player::SetPos(float x, float y)
{
	m_PosX = x, m_PosY = y;
}

void Player::SetMoveSpeed(float speed)
{
	m_MoveSpeed = speed;
}

int Player::GetHp()
{
	return m_Hp;
}

float Player::GetPosX()
{
	return m_PosX;
}

float Player::GetPosY()
{
	return m_PosY;
}

float Player::GetMoveSpeed()
{
	return m_MoveSpeed;
}