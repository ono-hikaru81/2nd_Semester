#include<stdlib.h>
#include<stdio.h>
#include<time.h>

class Fighter
{
public:
	// �R���X�g���N�^�[
	Fighter();
	// �f�X�g���N�^�[
	~Fighter();

	int m_hp;  // �̗�
	int m_str; // ��
	int m_mag; // ����
	int m_tec; // �e�N
	int m_spd; // ����
	int m_def; // �h��
	int m_mde; // ���h
	int m_luc; // �K�^
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
	printf("�p�����[�^�[\n");
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