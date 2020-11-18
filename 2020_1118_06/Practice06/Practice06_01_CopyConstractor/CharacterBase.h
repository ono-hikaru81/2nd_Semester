#ifndef CHARACTERBASE_H
#define CHARACTERBASE_H

// コピーコンストラクタ
/*
	コピーコンストラクタとは
	インスタンスの代入などを行った際に実行される特殊なコンストラクタ

	主に、インスタンス情報を別のインスタンスにコピーします

■呼び出されるケース
	・インスタンスへの代入(= 代入演算子)
	・関数に値渡しをする
	・インスタンスを戻り値に使う時

■重要な注意点
	クラスのメンバ変数に、動的に確保するインスタンスがある場合
	コピーコンストラクタで正しく対策を取らないと、
	メモリアクセス違反などのバグが発生してしまう

	解決策
		1. 動的に確保しない(メモリが無駄になるが、配列で確保しておく)
		2. 関数で渡す際に、値渡しではなく、ポインタ渡しなどにする
		3. コピーコンストラクタで、正しい対策をとる
*/

class CharacterBase
{
public:
	// コピーコンストラクタの書き方

	// クラス名(const クラス名& 引数名)
	CharacterBase(const CharacterBase& cb);

public:
	// デフォルトのコンストラクタ
	CharacterBase(const char* name, int hp, int mp);
	virtual ~CharacterBase();

	char* GetName() const { return m_pName; }
	int GetHp() const { return m_Hp; }
	int GetMp() const { return m_Mp; }

	// パラメーター表示
	void PrintParam();

	// ダメージを与える
	// 値渡しによるコピーコンストラクタ呼び出しテスト
	void ReceiveDamage(CharacterBase attacker);

	// 自身を複製する
	// インスタンスを戻り値に使うときのコピーコンストラクタ呼び出しテスト
	CharacterBase CreateCopy();

protected:
	char* m_pName;
	int m_Hp;
	int m_Mp;

};
#endif
