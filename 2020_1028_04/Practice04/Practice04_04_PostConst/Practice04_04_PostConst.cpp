#include <iostream>

// 後置const関数 = コンストメンバ関数
// 戻り値 関数名(引数) const;
class Test
{
public:
    void SetValue(int value);
    int GetValue() const;

private:
    int Value;
};

int main()
{
    Test test;
    test.SetValue(1000);
    int ans = test.GetValue();

    // データを取得したいだけの時
    // ポインタ変数のアドレスの先に変更を加えないことを保証する為
    // const ポインタ変数を使うことが一般的  
    const Test* pTest = &test;
//  pTest->GetValue(10);    // 今ストメンバ関数ではないため、使用できない(変更される恐れあり)
    pTest->GetValue();      // コンストメンバ関数なので、使用できる

    return 0;
}

void Test::SetValue(int value)
{
    Value = value;
}

// コンストメンバ関数の定義(実装)部分にも後置constを付ける
int Test::GetValue() const
{
    // 注：コンストメンバ関数の中では、メンバ関数に対する値の代入を行うことができない
    //     コンストメンバ関数を呼び出す際、内部のメンバ変数への代入操作を行わないことが保証されている
//  Value = 100;

    // コンストメンバ関数以外の関数を呼び出すこともできない
//  SetValue(100);

    return Value;
}

