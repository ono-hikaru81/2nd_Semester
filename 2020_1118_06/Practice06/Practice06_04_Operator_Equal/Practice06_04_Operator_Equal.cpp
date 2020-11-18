#include <iostream>
#include "Character.h"

int main()
{
	Character ch1;
	Character ch2 = ch1; // 実体を作る際に合わせて初期化する
	ch2 = ch1;			 // コピーコンストラクタが呼び出される
	// 代入演算子のオーバーロードの注意点
	/*
		宣言時の初期化では代入演算子のオーバーロードではなく
		コピーコンストラクタが呼び出される
		※配列の宣言時の初期化でもコピーコンストラクタは呼び出される
	*/

	return 0;
}
