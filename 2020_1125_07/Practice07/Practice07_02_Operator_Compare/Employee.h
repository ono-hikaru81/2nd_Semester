#ifndef EMPLOYEE_H
#define EMPLOYEE_H

// ��r���Z�q(==, !=, <, >,<=, >=)�̃I�y���[�^
/*
��������
	�߂�l�̌^�@operator ==(const �Q�ƈ���)

���N���X�̃I�y���[�^�Ƃ��ėp�ӂ���ꍇ
	Vector2D operator == (const Vector2D &vec) const;

	�߂�l�̌^
		bool	��r���ʂ�true,false�ɂȂ邽��bool�^�ɂȂ�

	����
		const Employee& vmp	�E�ӂ̃f�[�^�^��const�Q�ƌ^

	�Ăяo�����̗�
		Employee emp1;
		Employee emp2;

		vec1 + vec2; // ���̎��Ɂuoperator==�v���Ăяo�����

�����ӓ_
	�E�����o�ϐ��̂����y�����z��r���Ă���̂����킩��悤�ȃN���X�\���ɂ��Ă���
	  ����̂悤�ɁAm_Post �� m_Salary �͂ǂ������r�ΏۂɂȂ肤�邽�߁A
	  emp1 > emp2 �Ƃ����Ƃ��ɁAm_Post�Ŕ�r���Ă���̂��Am_Salary�Ŕ�r���Ă���̂�������ɂ���
	�E��r������ϐ���1�����ɍi��`...
*/

class Employee
{
public:
	// ��E
	enum POST
	{
		STAFF,			// ���Ј�
		SECTION_CHIEF,	// �ے�
		MANAGER,		// ����
		PRESIDENT		// �В�
	};

	Employee(POST post_);

	void ShowPost();
	POST GetPost() const;

	// > ���I�[�o�[���[�h
	bool operator > (const Employee& emp_) const;
	bool ����;

private:
	POST m_Post;	// ��E
	int m_Salary;	// ������
};

#endif // !EMPLOYEE_H
