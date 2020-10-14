#ifndef PLAYER_H
#define PLAYER_H

//===========================
//プレイヤークラス
//===========================
class Player
{
public:
	Player();
	~Player();

public:
	void Exex();
	void Draw();

public:
	void SetHp(int hp);
	void SetPos(float x,float y);
	void SetMoveSpeed(float speed);

	int GetHp();
	int GetPosX();
	int GetPosY();
	int GetMoveSpeed();

private:
	int m_Hp;
	int m_PosX;
	int m_PosY;
	int m_MoveSpeed;
};



#endif
