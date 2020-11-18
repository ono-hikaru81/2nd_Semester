#ifndef CHARACTERBASE_H
#define CHARACTERBASE_H

// �R�s�[�R���X�g���N�^
/*
	�R�s�[�R���X�g���N�^�Ƃ�
	�C���X�^���X�̑���Ȃǂ��s�����ۂɎ��s��������ȃR���X�g���N�^

	��ɁA�C���X�^���X����ʂ̃C���X�^���X�ɃR�s�[���܂�

���Ăяo�����P�[�X
	�E�C���X�^���X�ւ̑��(= ������Z�q)
	�E�֐��ɒl�n��������
	�E�C���X�^���X��߂�l�Ɏg����

���d�v�Ȓ��ӓ_
	�N���X�̃����o�ϐ��ɁA���I�Ɋm�ۂ���C���X�^���X������ꍇ
	�R�s�[�R���X�g���N�^�Ő������΍�����Ȃ��ƁA
	�������A�N�Z�X�ᔽ�Ȃǂ̃o�O���������Ă��܂�

	������
		1. ���I�Ɋm�ۂ��Ȃ�(�����������ʂɂȂ邪�A�z��Ŋm�ۂ��Ă���)
		2. �֐��œn���ۂɁA�l�n���ł͂Ȃ��A�|�C���^�n���Ȃǂɂ���
		3. �R�s�[�R���X�g���N�^�ŁA�������΍���Ƃ�
*/

class CharacterBase
{
public:
	// �R�s�[�R���X�g���N�^�̏�����

	// �N���X��(const �N���X��& ������)
	CharacterBase(const CharacterBase& cb);

public:
	// �f�t�H���g�̃R���X�g���N�^
	CharacterBase(const char* name, int hp, int mp);
	virtual ~CharacterBase();

	char* GetName() const { return m_pName; }
	int GetHp() const { return m_Hp; }
	int GetMp() const { return m_Mp; }

	// �p�����[�^�[�\��
	void PrintParam();

	// �_���[�W��^����
	// �l�n���ɂ��R�s�[�R���X�g���N�^�Ăяo���e�X�g
	void ReceiveDamage(CharacterBase attacker);

	// ���g�𕡐�����
	// �C���X�^���X��߂�l�Ɏg���Ƃ��̃R�s�[�R���X�g���N�^�Ăяo���e�X�g
	CharacterBase CreateCopy();

protected:
	char* m_pName;
	int m_Hp;
	int m_Mp;

};
#endif
