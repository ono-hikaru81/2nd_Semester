#ifndef POSITION_H
#define POSITION_H

// �e���v���[�g�N���X
/*
���T�v
	�N���X�̃����o�ɑ΂��ăe���v���[�g���g�����N���X

��������
	template <class T>
	class �N���X��
	{
		T �����o�ϐ�;

		T �֐���(����)
		{
		}
	};

	// �N���X�O�ɒ�`�������ꍇ
	template<typename �p�����[�^�[��>
	�߂�l�̌^ �N���X��<�p�����[�^�[��>::�֐���(����)
	{
	}

���⑫
	�E�e���v���[�g���g�����N���X�̂��Ƃ�ėp�N���X�ƌĂ񂾂肷��
	�Etypename��class�ɂ��ẮA���̋@�\�ɈႢ�͂Ȃ�
	  ���̃e���v���[�g���g���Ƃ��� T �̌^�� class �ł���\��������Ȃ� class
	  int��Afloat�Ȃǂ̃f�[�^�^�ł���ꍇ�� typename ���g�����[���ɂ��邱�Ƃ�
	  �R�[�h�̉\�����グ�邱�Ƃ��ł��邩��...�B
	�ET �Ə����������́A�ϐ��Ɠ��l�ɂǂ̂悤�Ȗ��O�ł��\��Ȃ�
	  'T'emplate�Ȃ̂ŁA�@T �Ƃ��ĉ�����Ă���Z�p����T�C�g������

�����ӓ_
	�N���X�̃e���v���[�g�ɂ��ẮA��{�I�ɒ�`(����)���܂߁A
	�S�Ẵw�b�_�[�t�@�C���ɏ����悤�ɂ���
	��cpp��p�ӂ��Ă�����ɒ�`�������ƁA�΍�����Ȃ�����G���[���o�Ă��܂�
*/

template <class  T>
class Position
{
public:
	Position()
		:m_PosX(0)
		, m_PosY(0)
	{}

public:
	void SetPosX(T x_) { m_PosX = x_; }
	void SetPosY(T y_) { m_PosY = y_; }

	T GetPosX() const { return m_PosX; }
	T GetPosY() const { return m_PosY; }

	// + �I�[�o�[���[�h(�N���X�O�ł̒�`�p)
	T operator + (const Position& pos_);
	// + �I�[�o�[���[�h(�N���X�O�ł̒�`�p)
	T operator = (const Position& pos_);

private:
	T m_PosX;
	T m_PosY;
};

// �e���v���[�g�N���X�̊֐���`(�N���X�O)
// + �I�[�o�[���[�h(�N���X�O�ł̎�����p)
template <class T>
T Position<T>::operator + (const Position& pos_)
{
	Position ans;
	ans.SetPosX(this->GetPosX() + pos_.GetPosX());
	ans.SetPosY(this->GetPosY() + pos_.GetPosY());

	return 0;
}

template<class T>
inline T Position<T>::operator=(const Position& pos_)
{
	return T();
}

#endif // !POSITION_H
