#ifndef ENEMY_H
#define ENMEY_H

#include"Base.h"

//===========================
//�G�l�~�[�[�N���X
//===========================
class Enemy:public Base
{
public:
	Enemy();
	~Enemy();

public:
	void Exex();
	void Draw();

public:
	// �����̋�`���ƁA�������������Ă��邩����
	bool CheckHit(int x, int y, int width, int height);

private:
	// �s���Ǘ��p�̕ϐ�
	int m_Routine;

//public:
//	void SetHp(int hp);
//	void SetPos(float x, float y);
//	void SetMoveSpeed(float speed);
//
//	int GetHp();
//	float GetPosX();
//	float GetPosY();
//	float GetMoveSpeed();
//
//private:
//	int m_Hp;
//	int m_PosX;
//	int m_PosY;
//	int m_MoveSpeed;
};



#endif
