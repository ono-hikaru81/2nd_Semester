#include <iostream>
#include "CharacterBase.h"

int main()
{
#if 0 // コピーコンストラクタの基本的な使い方
    CharacterBase player("プレイヤー",10, 8);
    CharacterBase enemy = player; // コピーコンストラクタ呼び出し

    // 引数attacker = playerと同義になるため、
    // コピーコンストラクタが呼び出される
    enemy.ReceiveDamage(player);

    player.PrintParam();
    enemy.PrintParam();

    CharacterBase dammy = enemy.CreateCopy();
    printf("\n");
    enemy.CreateCopy();
#endif
    // 危険なケースをテストする為、変数の寿命を明確にする
    CharacterBase character("お饅頭", 10, 10);
    {
        CharacterBase character2 = character;
        character.ReceiveDamage(character2);
    }
    character.PrintParam();

    return 0;
}
