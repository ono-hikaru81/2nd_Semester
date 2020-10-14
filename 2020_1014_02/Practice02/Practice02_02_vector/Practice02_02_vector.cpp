#include <stdlib.h>
#include <stdio.h>
#include <vector> // ベクタークラスを使うためのヘッダー
#include <iostream>
#include <time.h>

int main()
{
    srand((unsigned)time(NULL));

    // vectorクラスの変数を使うときの書き方
    // std::vector<型名>変数名;
    // 初期化の方法
//    std::vector<int> v1; // 配列の要素 0
//    std::vector<int> v1 = { 0,1,2 }; // 要素 3、0,1,2で初期化
//    std::vector<int> v1{ 0,1,2 };    // 要素 3、0,1,2で初期化
//    std::vector<int> v1{ 6,-1 };     // 要素 6、全てを-1で初期化
    std::vector<int> v1{0,1,2 };    // 要素 8、全てを0で初期化
    v1.resize(8);
    std::vector<int> v2 = v1;        // v2をv1の内容で初期化

    // 値の代入 配列と同じように[]を使える
    v1[0] = 10;

    // 配列のサイズを確認 .size
    int size = v1.size();
    std::cout << size << std::endl;

    for (int i = 0;i < v1.size();i++)
    {
        v1[i] = rand();
        printf("v1[%d] = %d\n", i, v1[i]);
    }
    printf("\n");

    // 要素の追加 .push_back() /insert()
    v1.push_back(10);
    v1.insert(v1.begin() + 1, 100);  // 先頭から + 1番目に100を追加

    for (int i = 0; i < v1.size(); i++)
    {
        printf("v1[%d] = %d\n", i, v1[i]);
    }

    // 要素の削除 .pop_back() .erase()
    v1.pop_back(); // 末尾の要素を削除
    v1.erase(v1.begin()); // 要素の先頭を削除

    for (int i = 0; i < v1.size();i++)
    {
        printf("v1[%d] = %d\n",i,v1[i]);
    }

    // 全要素の削除 .clear()
    v1.clear();
    printf("v1 size = %d\n", v1.size());

    // 要素が0火を調べるには.emptyを使う
    if (v1.empty() == true)
    {
        printf("v1 is Empty!\n");
    }

    // 要素数を変更する .resize() .reserve()
    v1.resize(5); // 要素数を５
    v1.resize(3); // 要素数を5 => 3に変更
    v1.resize(6, -1); // 要素数を3 => 6に変更し、増加分を-1で初期化

    printf("\n");

    for (int i = 0; i < v1.size(); i++)
    {
        printf("v1[%d] = %d\n", i, v1[i]);
    }

    // あらかじめ最大数がわかっている場合は
    // .reserve()で領域を確保しておく
    v1.reserve(100); // 要素数100までは、素早く処理できる

    system("pause");
    return 0;
}
