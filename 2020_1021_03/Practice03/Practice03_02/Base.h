#ifndef BASE_H
#define BASE_H

// 基底クラス(親クラス)
class Base
{
public:
	Base();
	virtual ~Base();

public:
	// 1継承先で、それぞれ処理の違うことがわかっている関数を
	// 純粋仮想関数として基底クラスに宣言
	virtual void Exec() = 0;
	virtual void Draw() = 0;

public:
	// 引数の矩形情報と、自分が当たっているかの判定
	// 関数宣言の前にvirtualを付けると、それは仮想関数になる
	virtual bool CheckHit(int x, int y, int width, int height);

	void SetHp(int hp);
	void SetPos(float x, float y);
	void SetMoveSpeed(float speed);

	int GetHp();
	float GetPosX();
	float GetPosY();
	float GetMoveSpeed();

private:
	int m_Hp;
	int m_PosX;
	int m_PosY;
	int m_MoveSpeed;

	int m_Width;	// 当たり判定＿幅
	int m_Height;	// 当たり判定＿高さ

};


#endif // #ifndef BASE_H

