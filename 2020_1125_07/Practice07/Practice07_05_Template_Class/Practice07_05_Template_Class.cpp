﻿#include <iostream>
#include "Position.h"

int main()
{
	// テンプレートクラスの使い方
	// クラス名<データ型> 変数名;
//	Position iPos; これでは、メンバ変数が何型かわからないため、エラーが出る
	Position<int>	iPos;	// m_PosX(Y)をint型として扱うPositionクラス
	Position<float> fPos;	// m_PosX(Y)をfloat型として扱うPositionクラス

	return 0;
}
