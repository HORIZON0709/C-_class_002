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
	CEnemy enemy;								//敵情報
	CEnemyHuman enemyHuman[CEnemy::MAX_ENEMY];	//人型の敵情報
	CEnemyBird enemyBird[CEnemy::MAX_ENEMY];	//鳥型の敵情報

	//敵の数を設定
	int nNumEnemy = enemy.SetNumEnemy();

	for (int i = 0; i < nNumEnemy; i++)
	{
		//現在の設定数を表示
		printf("\n 《 %d体目 》", (i + 1));

		//生成する敵を選択
		CEnemy::ENEMY_TYPE nEnemyType = enemy.SelectEnemyType();

		switch (nEnemyType)
		{
		case CEnemy::ENEMY_TYPE::HUMAN:		/* 人型 */

			enemyHuman[i].Init();		//初期化
			enemyHuman[i].Input();		//入力
			enemyHuman[i].Output();		//出力
			enemyHuman[i].Uninit();		//終了
			break;

		case CEnemy::ENEMY_TYPE::BIRD:		/* 鳥型 */

			enemyBird[i].Init();	//初期化
			enemyBird[i].Input();	//入力
			enemyBird[i].Output();	//出力
			enemyBird[i].Uninit();	//終了
			break;

		default:
			assert(false);
			break;
		}
	}

	//終了メッセージ
	printf("\n プログラムを終了します。お疲れ様でした。");

	//Enter入力待ち
	printf("\n\n Press Enter");
	rewind(stdin);
	getchar();
}