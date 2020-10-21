#include "Enemy.h"
#include <stdio.h>

Enemy::Enemy()
{
	m_Routine = 0;
}

Enemy::~Enemy()
{

}

void Enemy::Exex()
{

}

void Enemy::Draw()
{

}

bool Enemy::CheckHit(int x, int y, int width, int height)
{
	// âºÇ…ÅAìñÇΩÇÁÇ»Ç©Ç¡ÇΩÇ±Ç∆Ç…Ç∑ÇÈ
	printf("Enemy : ìñÇΩÇËÇ‹ÇπÇÒÇ≈ÇµÇΩ\n");
	return false;
}

//void Enemy::SetHp(int hp)
//{
//	m_Hp = hp;
//}
//
//void Enemy::SetPos(float x, float y)
//{
//	m_PosX = x, m_PosY = y;
//}
//
//void Enemy::SetMoveSpeed(float speed)
//{
//	m_MoveSpeed = speed;
//}
//
//int Enemy::GetHp()
//{
//	return m_Hp;
//}
//
//float Enemy::GetPosX()
//{
//	return m_PosX;
//}
//
//float Enemy::GetPosY()
//{
//	return m_PosY;
//}
//
//float Enemy::GetMoveSpeed()
//{
//	return m_MoveSpeed;
//}
