#ifndef UNIT_H
#define UNIT_H

#include"Common.h"

class Unit
{
public:
	// コンストラクター
	Unit();
	// デストラクター
	~Unit();

	void PrintStatus()
	{
		Unit unit;

		printf("================\n");
		printf("パラメーター\n");
		printf("================\n");
		printf("m_hp  = 0\n", unit.m_hp);
		printf("m_str = 0\n", unit.m_str);
		printf("m_mag = 0\n", unit.m_mag);
		printf("m_tec = 0\n", unit.m_tec);
		printf("m_spd = 0\n", unit.m_spd);
		printf("m_def = 0\n", unit.m_def);
		printf("m_mde = 0\n", unit.m_mde);
		printf("m_luc = 0\n", unit.m_luc);
		printf("================\n");
	}

private:
    int m_hp;  // 体力
	int m_str; // 力
	int m_mag; // 魔力
	int m_tec; // テク
	int m_spd; // 早さ
	int m_def; // 防御
	int m_mde; // 魔防
	int m_luc; // 幸運
};

Unit::Unit()
{
	m_hp = 0;
	m_str = 0;
	m_mag = 0;
	m_tec = 0;
	m_spd = 0;
	m_def = 0;
	m_mde = 0;
	m_luc = 0;
}

Unit::~Unit()
{

}

#endif
