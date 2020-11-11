﻿#include <iostream>

// 参照を引数にもつ関数
void Init(int& rhp, int& rmp)
{
    rhp = 50;
    rmp = 10;
}

void Print(const int& rhp, const int& rmp)
{
    printf("hp = %d\n", rhp);
    printf("mp = %d\n", rmp);
}

int main()
{
    // 参照型の書き方
    // データ型& 変数名
    int val = 0;
    int& ref = val;
    int* pVal = &val;

    printf("valのアドレス  %x\n", &val);
    printf("refのアドレス  %x\n", &ref);
    printf("pVAlのアドレス %x\n", &pVal);

    printf("\n");
    printf("valに100を代入\n");
    val = 100;

    
    printf("val = %d\n", val);
    printf("ref = %d\n", ref);

    printf("\n");
    printf("refに20を代入\n");
    ref = 20;
    printf("val = %d\n", val);
    printf("ref = %d\n", ref);

    // 参照渡し
    // 引数に参照を持つ関数を渡すこと
    printf("\n");
    int hp = 0;
    int mp = 0;
    Init(hp, mp);   // 参照渡し
    Print(hp, mp);  // const参照渡し

    // 参照渡しの注意点
    // 実体のある変数しか渡せない
//    Init(50.10);
    
    return 0;
}