#include"Common.h"
#include"Unit.h"

int main()
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

	system("pause");
	return 0;
}