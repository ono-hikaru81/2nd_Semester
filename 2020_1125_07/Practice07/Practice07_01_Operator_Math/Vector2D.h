#ifndef VECTOR_2D_H
#define VECTOR_2D_H

// �Z�p���Z�q�̃I�y���[�^
/*
��������
	�߂�l�̌^�@operator +(const �Q�ƈ���)

���N���X�̃I�y���[�^�Ƃ��ėp�ӂ���ꍇ
	Vector2D operator + (const Vector2D &vec);

	�߂�l�̌^
		Vector2D	�N���X�̒l�n��

	����
		const Vector2D& vec	�E�ӂ̃f�[�^�^��const�Q�ƌ^

	�Ăяo�����̗�
		Vector2D vec1;
		Vector2D vec2;

		vec1 + vec2; // ���̎��Ɂuoperator+�v���Ăяo�����

���p�ӂ��郁���b�g
	�E�N���X���̑S�����o�ϐ��ɑ΂��āA�����v�Z�����鎞�A�R�[�e�B���O��Z�k�o����
	�E�����I�Ɏg�����Ƃ��ł���
	�@�ʏ�Ȃ�΁AAddPos�Ȃǂ̊֐���p�ӂ��邱�Ƃ��K�v�ɂȂ�

�����ӓ_
	�EVector2D�� x�Ay �ɑ΂��A�ʂɒl�����Z�A�擾�������ꍇ�́A
	  �ʏ�ʂ�AAddPos,GetPosX�Ȃǂ̊֐���p�ӂ���K�v������
	  operator + �����ł�X�ɑ����̂�Y�ɑ����̂����f�ł��Ȃ�����  
*/

class Vector2D
{
public:
	Vector2D();
	Vector2D(float x_, float y_);

	float GetX() const { return m_X; }
	float GetY() const { return m_Y; }

	// = �̃I�[�o�[���[�h
	Vector2D& operator = (const Vector2D& vec);
	// *= �̃I�[�o�[���[�h
	Vector2D& operator += (const Vector2D& vec);
	// + �̃I�[�o�[���[�h
	const Vector2D operator + (const Vector2D& vec);

private:
	float m_X;
	float m_Y;
};

#endif // !VECTOR_2D_H
