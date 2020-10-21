﻿#include <stdlib.h>
#include <stdio.h>
#include<string>

#include"Base.h"
#include "Player.h"
#include "Enemy.h"

// ステータス表示
void PrintStatus(std::string name, Base* target);

int main()
{
    //Player player;
    //player.SetMoveSpeed(5.0f);
    Base* player = new Player();
    player->SetMoveSpeed(5.0f);

    //Enemy enemy;
    //enemy.SetHp(100);
    Base* enemy = new Enemy();
    enemy->SetHp(100);

    Base* pBase[] =
    {
        player,
        enemy    
    };
    std::string name[] =
    {
        "Player",
        "Enemy",
    };

    printf("=========\n");
    printf("PRACTICE03_02\n");
    printf("==========\n");

    for (int i = 0; i < 2; i++)
    {
        pBase[i]->Exec();
        pBase[i]->Draw();
        pBase[i]->CheckHit(10, 10, 20, 30);
        PrintStatus(name[i].c_str(), pBase[i]);
    }

    delete player;
    player = nullptr;
    delete enemy;
    enemy = nullptr;

    system("pause");
    return 0;
}

void PrintStatus(std::string name, Base* target)
{
    if (target == nullptr)
    {
        return;
    }
    printf("%s Status\n",name.c_str());
    printf("hp = %d\n", target->GetHp());
    printf("PosX = %0.2f\n", target->GetPosX());
    printf("PosY = %0.2f\n", target->GetPosY());
    printf("MoveSpeed = %0.2f\n", target->GetMoveSpeed());
    printf("\n");
}