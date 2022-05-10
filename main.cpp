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

//********************************
//定数の定義
//********************************
namespace
{
const int MAX_ENEMY = 3;		//敵の最大数
const int MIN_ENEMY = 1;		//敵の最少数
}// namespaceはここまで

 //********************************
 //プロトタイプ宣言
 //********************************
namespace
{
int SelectEnemyType();
int SetNumEnemy();
}// namespaceはここまで

//===================================================
//メイン関数
//===================================================
void main(void)
{
	CEnemyHuman* pEnemyHuman = nullptr;		//人型の敵情報ポインタ
	CEnemyBird* pEnemyBird = nullptr;		//鳥型の敵情報ポインタ

	//生成する敵を選択
	int nEnemyType = SelectEnemyType();

	//敵の数を設定
	int nNumEnemy = SetNumEnemy();

	switch ((CEnemy::ENEMY_TYPE)nEnemyType)
	{
	case CEnemy::ENEMY_TYPE::HUMAN:		/* 人型 */

		if (pEnemyHuman == nullptr)
		{//NULLチェック
			//メモリの動的確保
			pEnemyHuman = new CEnemyHuman[nNumEnemy];
		}

		for (int i = 0; i < nNumEnemy; i++)
		{//初期化
			pEnemyHuman[i].Init();
		}

		for (int i = 0; i < nNumEnemy; i++)
		{//入力
			//現在の設定数を表示
			printf("\n 《 %d体目 》", (i + 1));
			pEnemyHuman[i].Input();
		}

		for (int i = 0; i < nNumEnemy; i++)
		{//出力
			//設定数を表示
			printf("\n 《 %d体目 》", (i + 1));
			pEnemyHuman[i].Output();
		}

		for (int i = 0; i < nNumEnemy; i++)
		{//終了
			pEnemyHuman[i].Uninit();
		}
		
		if (pEnemyHuman != nullptr)
		{//NULLチェック
			//メモリの解放
			delete[] pEnemyHuman;
			pEnemyHuman = nullptr;
		}
		break;

	case CEnemy::ENEMY_TYPE::BIRD:		/* 鳥型 */

		if (pEnemyBird == nullptr)
		{//NULLチェック
			//メモリの動的確保
			pEnemyBird = new CEnemyBird[nNumEnemy];
		}
		for (int i = 0; i < nNumEnemy; i++)
		{//初期化
			pEnemyBird[i].Init();
		}

		for (int i = 0; i < nNumEnemy; i++)
		{//入力
			//現在の設定数を表示
			printf("\n 《 %d体目 》", (i + 1));
			pEnemyBird[i].Input();
		}

		for (int i = 0; i < nNumEnemy; i++)
		{//出力
			//設定数を表示
			printf("\n 《 %d体目 》", (i + 1));
			pEnemyBird[i].Output();
		}

		for (int i = 0; i < nNumEnemy; i++)
		{//終了
			pEnemyBird[i].Uninit();
		}
		
		if (pEnemyBird != nullptr)
		{//NULLチェック
			//メモリの解放
			delete[] pEnemyBird;
			pEnemyBird = nullptr;
		}
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

namespace
{
//===================================================
//敵の種類を選ぶ
//===================================================
int SelectEnemyType()
{
	int nType = 0;	//タイプ選択用

	while (1)
	{
		//メッセージ
		printf("\n 《 生成する敵を選択 》");
		printf("\n [ %d ] 人型", CEnemy::ENEMY_TYPE::HUMAN);
		printf("\n [ %d ] 鳥型", CEnemy::ENEMY_TYPE::BIRD);
		printf("\n 番号を入力 > ");
		scanf("%d", &nType);

		if ((nType > (int)(CEnemy::ENEMY_TYPE::NONE)) && (nType < (int)(CEnemy::ENEMY_TYPE::MAX)))
		{//範囲内
			break;
		}

		/* 範囲外 */

		//メッセージ
		printf("\n ※ 範囲外です。 ※");

		//Enter入力待ち
		printf("\n\n Press Enter");
		rewind(stdin);
		getchar();

		//画面をクリア
		system("cls");
	}

	return nType;	//選択した番号を返す
}

//===================================================
//敵の数を設定
//===================================================
int SetNumEnemy()
{
	int nNumEnemy = 0;	//敵の数設定用

	while (1)
	{
		//メッセージ
		printf("\n 敵の数を入力( %d体まで ) > ", MAX_ENEMY);
		scanf("%d", &nNumEnemy);

		if ((nNumEnemy >= MIN_ENEMY) && (nNumEnemy <= MAX_ENEMY))
		{//範囲内
			break;
		}

		/* 範囲外 */

		//メッセージ
		printf("\n ※ 範囲外です。 ※");

		//Enter入力待ち
		printf("\n\n Press Enter");
		rewind(stdin);
		getchar();

		//画面をクリア
		system("cls");
	}

	//画面をクリア
	system("cls");

	return nNumEnemy;	//選択した番号を返す
}
}// namespaceはここまで