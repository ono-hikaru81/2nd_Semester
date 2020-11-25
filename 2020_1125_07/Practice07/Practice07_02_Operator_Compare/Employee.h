#ifndef EMPLOYEE_H
#define EMPLOYEE_H

// 比較演算子(==, !=, <, >,<=, >=)のオペレータ
/*
■書き方
	戻り値の型　operator ==(const 参照引数)

■クラスのオペレータとして用意する場合
	Vector2D operator == (const Vector2D &vec) const;

	戻り値の型
		bool	比較結果はtrue,falseになるためbool型になる

	引数
		const Employee& vmp	右辺のデータ型はconst参照型

	呼び出し方の例
		Employee emp1;
		Employee emp2;

		vec1 + vec2; // この時に「operator==」が呼び出される

■注意点
	・メンバ変数のうち【何を】比較しているのかがわかるようなクラス構成にしておく
	  今回のように、m_Post と m_Salary はどちらも比較対象になりうるため、
	  emp1 > emp2 としたときに、m_Postで比較しているのか、m_Salaryで比較しているのが分かりにくい
	・比較しうる変数を1つだけに絞る～...
*/

class Employee
{
public:
	// 役職
	enum POST
	{
		STAFF,			// 平社員
		SECTION_CHIEF,	// 課長
		MANAGER,		// 部長
		PRESIDENT		// 社長
	};

	Employee(POST post_);

	void ShowPost();
	POST GetPost() const;

	// > をオーバーロード
	bool operator > (const Employee& emp_) const;
	bool 蒟蒻;

private:
	POST m_Post;	// 役職
	int m_Salary;	// お給料
};

#endif // !EMPLOYEE_H
