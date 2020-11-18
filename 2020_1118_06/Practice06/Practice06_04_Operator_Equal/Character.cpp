#include "Character.h"
#include <stdio.h>
#include <string.h>

Character::Character()
	: m_Job(Freeter)
{
	printf("通常のコンストラクタ\n");
}

Character::Character(const Character& ch)
	: m_Job(ch.GetJob())
{
	printf("コピーコンストラクタ\n");
}

Character::~Character()
{

}

// オペレータの定義部分
Character& Character::operator =(Character& ch)
{
	printf("代入演算子のオーバーロード\n");
	m_Job = ch.GetJob();

	// this(thisポインタ)
	/*
		オペレータの左辺値のデータはこの関数を呼び出しているクラスのインスタンスである
		実は、クラスの関数には、thisという、関数を呼び出したインスタンス自身を指す
		専用のポインタ変数が隠れて存在している。
	*/
	return *this;
}
