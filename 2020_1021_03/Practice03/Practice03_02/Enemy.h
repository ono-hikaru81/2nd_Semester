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
	virtual~Enemy();

public:
	void Exec();
	void Draw();

public:
	// �����̋�`���ƁA�������������Ă��邩����
	bool CheckHit(int x, int y, int width, int height);

private:
	// �s���Ǘ��p�̕ϐ�
	int m_Routine;
};



#endif
