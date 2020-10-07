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

	void PrintStatus();

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

#endif
