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

	void PrintStatus();

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

#endif
