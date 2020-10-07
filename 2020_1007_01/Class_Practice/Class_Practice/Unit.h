#ifndef UNIT_H
#define UNIT_H

#include"Common.h"

class Unit
{
public:
	// �R���X�g���N�^�[
	Unit();
	// �f�X�g���N�^�[
	~Unit();

	void PrintStatus()
	{
		Unit unit;

		printf("================\n");
		printf("�p�����[�^�[\n");
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
    int m_hp;  // �̗�
	int m_str; // ��
	int m_mag; // ����
	int m_tec; // �e�N
	int m_spd; // ����
	int m_def; // �h��
	int m_mde; // ���h
	int m_luc; // �K�^
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
