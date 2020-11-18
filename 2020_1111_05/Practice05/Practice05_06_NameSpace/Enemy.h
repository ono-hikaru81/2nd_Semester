#ifndef ENEMY_H
#define ENEMY_H

// namespace 名前空間の書き方
// namespace namesoaceの名前
// {
//		// グローバル変数やクラス定義など
// }

// Enemy名前空間
namespace Enemy
{
	static const int Max = 10; // 敵最大数

	// namespaceに属しているデータを使う時の書き方(namespaceの内)
	// namespace::
	void PrintMax()
	{
		printf("敵の最大数 = %d\n", Max);
	}
}


#endif
