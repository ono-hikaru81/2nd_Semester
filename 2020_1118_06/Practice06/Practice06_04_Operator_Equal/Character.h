
#ifndef CHARACTER_H
#define CHARACTER_H

// 代入演算子のオペレータ
/*
■書き方
	戻り値の型 opetator =(引数);

■クラスのオペレータとして用意する場合
	Character& operator = (Character &ch);

	戻り値の型
		Character&		クラスの参照型

	引数

	呼び出し方の例

*/

class Character
{
public:
	enum JOB
	{
		Freeter,	// 無職
		Warrior,	// 戦士
		Wizard,		// 魔法使い
		Priest,		// 僧侶
	};

public:
	// デフォルトの引数付きコンストラクタ
	Character();
	Character(const Character& ch);
	virtual ~Character();

	// 代入演算子( = )のoperator
	Character& operator = (Character& ch);

	JOB GetJob() const { return m_Job; };

private:
	JOB m_Job;
};

// パラメータを表示するだけ
void PrintParam(Character ch);

#endif	// #ifndef CHARACTER_BASE_H
