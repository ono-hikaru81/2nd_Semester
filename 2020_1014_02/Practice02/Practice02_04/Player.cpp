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

int Player::GetPosX()
{
	return m_PosX;
}

int Player::GetPosY()
{
	return m_PosY;
}

int Player::GetMoveSpeed()
{
	return m_MoveSpeed;
}