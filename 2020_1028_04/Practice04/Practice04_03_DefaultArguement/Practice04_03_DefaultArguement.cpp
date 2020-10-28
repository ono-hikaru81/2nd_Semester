#include <iostream>

// デフォルト引数
// 関数の引数にはデフォルト値を設定することが出来る
// デフォルト値が設定された引数は、関数の呼び出し時に省略することができる
class Calculator
{
public:
    int Add(int a, int b);
    // 引数bのデフォルト値を２とする
    // 戻り値の型 関数名(仮引数の型 仮引数 = 初期値)
    int Mul(int a, int b = 2);
    // 注：デフォルト値の設定は、宣言部でも定義部でも構わないが、
    //     両方に書くことはできない
    //     オススメは .h側の宣言部に書き、定義部はコメントアウトしておく

    // 注：デフォルトの引数後ろには、未確定の引数を付けることはできない
    //     デフォルト引数は必ず末尾に追加する
//    int sub(int a = 100, int b, int c);
// Sub(100, 10, 30);    // これは意味が通る
// Sub(10, 30);         // .....?
//  これは、Sub(100, 10, 30)なのかSub(10, 30, 渡し忘れ);どちらなのか不明

};

int Calculator::Add(int a, int b)
{
    return (a + b);
}

int Calculator::Mul(int a, int b)
{
    return (a * b);
}

int main()
{
    Calculator calc;
    std::cout << calc.Add(10, 20) << std::endl;
    std::cout << calc.Mul(100, 4) << std::endl;
    std::cout << calc.Mul(100) << std::endl;

}
