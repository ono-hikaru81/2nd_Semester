#include "Enemy.h"
#include <stdio.h>

Enemy::Enemy()
{
	printf("Enemy : コンストラクタ\n");
}

Enemy::~Enemy()
{
	printf("Enemy : デストラクタ\n");
}

void Enemy::Exec()
{

}

void Enemy::Draw()
{

}

bool Enemy::CheckHit(int x, int y, int width, int height)
{
	// 仮に、当たらなかったことにする
	printf("Enemy : 当たりませんでした\n");
	return false;
}


