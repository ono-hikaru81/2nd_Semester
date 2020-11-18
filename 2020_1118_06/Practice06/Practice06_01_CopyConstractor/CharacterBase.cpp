#include "CharacterBase.h"
#include <stdio.h>
#include <string.h>

// �R�s�[�R���X�g���N�^�̏�����(��`)
// �N���X��::�R���X�g���N�^(const �N���X��& ������)
// {
// }
CharacterBase::CharacterBase(const CharacterBase& cb)
{
	printf("CharacterBase::�R�s�[�R���X�g���N�^\n");
	m_pName = cb.m_pName;
	m_Hp = cb.m_Hp;
	m_Mp = cb.m_Mp;
}

// �f�t�H���g�̈����t���R���X�g���N�^
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

//�@�p�����[�^�[�\��
void CharacterBase::PrintParam()
{
	printf("���O = %s\n", m_pName);
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
	// �ϐ�copy���L���Ȃ̂́ACreateCopy���܂łȂ̂ŁA
	// �Ăяo�������Ŏg�����߂ɁA�߂�l�ϐ��Ƃ���������̂�
	// �l����(�߂�l = copy)���Ă��邽��
	// �R�s�[���i�g���H���Ăяo�����
	CharacterBase copy(m_pName, m_Hp, m_Mp);
	return copy;
}
