//===================================================
//
//授業その2[main.cpp]
//Author:KishimotoEiji
//
//===================================================

//*************************************
//インクルード
//*************************************
#include "main.h"
#include "enemy.h"

#include <stdio.h>
#include <stdlib.h>

//===================================================
//メイン関数
//===================================================
void main(void)
{
	CEnemy enemy;	//敵情報

	//初期化
	enemy.Init();

	//入力
	enemy.Input();

	//画面をクリア
	system("cls");

	//出力
	enemy.Output();

	//終了
	enemy.Uninit();

	//終了メッセージ
	printf("\n プログラムを終了します。お疲れ様でした。");

	//Enter入力待ち
	printf("\n\n Press Enter");
	rewind(stdin);
	getchar();
}