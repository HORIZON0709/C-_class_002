//===================================================
//
//授業その2[main.cpp]
//Author:KishimotoEiji
//
//===================================================

//********************************
//インクルード
//********************************
#include "main.h"
#include "enemy.h"

#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

//===================================================
//メイン関数
//===================================================
void main(void)
{
	CEnemy enemy;			//敵情報
	CEnemyHuman enemyHuman;	//人型の敵情報
	CEnemyBird enemyBird;	//鳥型の敵情報

	//生成する敵を選択
	CEnemy::ENEMY_TYPE nEnemyType = enemy.SelectEnemyType();

	switch (nEnemyType)
	{
	case CEnemy::ENEMY_TYPE::HUMAN:		//人型
		
		enemyHuman.Init();	//初期化
		enemyHuman.Input();	//入力

		//画面をクリア
		system("cls");

		enemyHuman.Output();	//出力
		enemyHuman.Uninit();	//終了
		break;

	case CEnemy::ENEMY_TYPE::BIRD:		//鳥型
		
		enemyBird.Init();	//初期化
		enemyBird.Input();	//入力

		//画面をクリア
		system("cls");

		enemyBird.Output();	//出力
		enemyBird.Uninit();	//終了
		break;

	default:
		assert(false);
		break;
	}

	//終了メッセージ
	printf("\n プログラムを終了します。お疲れ様でした。");

	//Enter入力待ち
	printf("\n\n Press Enter");
	rewind(stdin);
	getchar();
}