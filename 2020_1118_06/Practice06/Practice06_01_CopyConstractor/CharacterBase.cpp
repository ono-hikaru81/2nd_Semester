#include "CharacterBase.h"
#include <stdio.h>
#include <string.h>

// コピーコンストラクタの書き方(定義)
// クラス名::コンストラクタ(const クラス名& 引数名)
// {
// }
CharacterBase::CharacterBase(const CharacterBase& cb)
{
	printf("CharacterBase::コピーコンストラクタ\n");
	m_pName = cb.m_pName;
	m_Hp = cb.m_Hp;
	m_Mp = cb.m_Mp;
}

// デフォルトの引数付きコンストラクタ
CharacterBase::CharacterBase(const char* name, int hp, int mp)
	: m_pName(nullptr)
	,m_Hp(10)
	,m_Mp(8)
{
	m_pName = new char[32];
	strcpy_s(m_pName, 32, name);
}

CharacterBase::~CharacterBase()
{
	delete[] m_pName;
}

//　パラメーター表示
void CharacterBase::PrintParam()
{
	printf("名前 = %s\n", m_pName);
	printf("Hp = %d\n", m_Hp);
	printf("Mp = %d\n", m_Mp);
}

void CharacterBase::ReceiveDamage(CharacterBase attacker)
{
	printf("--ReciveDamege--\n");
	m_Hp -= attacker.m_Mp;
}

CharacterBase CharacterBase::CreateCopy()
{
	// 変数copyが有効なのは、CreateCopy内までなので、
	// 呼び出した側で使うために、戻り値変数ともいえるものに
	// 値を代入(戻り値 = copy)しているため
	// コピー公司トラ芥が呼び出される
	CharacterBase copy(m_pName, m_Hp, m_Mp);
	return copy;
}
