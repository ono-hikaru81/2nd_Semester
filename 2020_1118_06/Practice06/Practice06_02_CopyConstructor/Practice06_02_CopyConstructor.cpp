#include <iostream>
#include "Character.h"

int main()
{
    // スコープを作成してcharacterの寿命を明確にする
    {
        Character character("お饅頭", 50, 10);

#ifdef PATTERN_02
        PrintParam(&character);
        PrintParam(&character);
#else
        PrintParam(character);
        PrintParam(character);

#endif
    }
}
