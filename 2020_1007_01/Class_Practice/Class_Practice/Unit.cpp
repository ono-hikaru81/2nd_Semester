#include"Common.h"
#include"Unit.h"

Unit::Unit()
{
	status._hp = 0;
	status._str = 0;
	status._mag = 0;
	status._tec = 0;
	status._spd = 0;
	status._def = 0;
	status._mde = 0;
	status._luc = 0;
}

Unit::~Unit()
{

}

void Unit::PrintStatus()
{
	Unit unit;

	printf("================\n");
	printf("パラメーター\n");
	printf("================\n");
	printf("m_hp  = %d\n", unit.status._hp);
	printf("m_str = %d\n", unit.status._str);
	printf("m_mag = %d\n", unit.status._mag);
	printf("m_tec = %d\n", unit.status._tec);
	printf("m_spd = %d\n", unit.status._spd);
	printf("m_def = %d\n", unit.status._def);
	printf("m_mde = %d\n", unit.status._mde);
	printf("m_luc = %d\n", unit.status._luc);
	printf("================\n");
}