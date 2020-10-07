#include<stdlib.h>
#include<stdio.h>
#include<time.h>

class Fighter
{
public:
	// コンストラクター
	Fighter();
	// デストラクター
	~Fighter();

	int m_hp;  // 体力
	int m_str; // 力
	int m_mag; // 魔力
	int m_tec; // テク
	int m_spd; // 早さ
	int m_def; // 防御
	int m_mde; // 魔防
	int m_luc; // 幸運
};

Fighter::Fighter()
{
	m_hp  = 0;
	m_str = 0;
	m_mag = 0;
	m_tec = 0;
	m_spd = 0;
	m_def = 0;
	m_mde = 0;
	m_luc = 0;
}

Fighter::~Fighter()
{

}

int main()
{
	
	Fighter fighter;

	printf("================\n");
	printf("パラメーター\n");
	printf("================\n");
	printf("m_hp  = 0\n", fighter.m_hp);
	printf("m_str = 0\n", fighter.m_str);
	printf("m_mag = 0\n", fighter.m_mag);
	printf("m_tec = 0\n", fighter.m_tec);
	printf("m_spd = 0\n", fighter.m_spd);
	printf("m_def = 0\n", fighter.m_def);
	printf("m_mde = 0\n", fighter.m_mde);
	printf("m_luc = 0\n", fighter.m_luc);
	printf("================\n");

	system("pause");
	return 0;
}