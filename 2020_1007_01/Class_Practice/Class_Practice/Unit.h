#ifndef UNIT_H
#define UNIT_H

#include"Common.h"
#include"Difinition.h"

class Unit
{
public:
	// コンストラクター
	Unit();
	// デストラクター
	~Unit();

	void PrintStatus();

private:
	Status status;
};

#endif
