#ifndef FILE_H
#define FILE_H

// namespace�̏����� ���O��Ԃ̏�����(����q)
/*
namespace namespce�̖��O���̂P
{
	namespace namespace���̂Q
	{


	}
}
*/

// �t�@�C��
namespace File
{
	// �e�N�X�`��
	namespace Texture
	{
		static const int Max = 100;

		// �����܂ŏ����Ƃނ��댩�Â炭�Ȃ�
		/*
		//  �v���C���[
		namespace Player
		{
			// UI
			namespace UI
			{
				// HP
				namespace Hp
				{

				}
			}
		}
		*/


	}

	// �T�E���h
	namespace Sound
	{
		static const int Max = 20;
	}

	static const int Max = Texture::Max + Sound::Max;
}



#endif // !FILE_H
