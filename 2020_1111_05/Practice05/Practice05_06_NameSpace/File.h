#ifndef FILE_H
#define FILE_H

// namespaceの書き方 名前空間の書き方(入れ子)
/*
namespace namespceの名前その１
{
	namespace namespaceその２
	{


	}
}
*/

// ファイル
namespace File
{
	// テクスチャ
	namespace Texture
	{
		static const int Max = 100;

		// ここまで書くとむしろ見づらくなる
		/*
		//  プレイヤー
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

	// サウンド
	namespace Sound
	{
		static const int Max = 20;
	}

	static const int Max = Texture::Max + Sound::Max;
}



#endif // !FILE_H
