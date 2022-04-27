//===================================================
//
//授業その2[enemy.cpp]
//Author:KishimotoEiji
//
//===================================================

//*************************************
//インクルード
//*************************************
#include "enemy.h"

#include <stdio.h>

//===================================================
//コンストラクタ
//===================================================
CEnemy::CEnemy()
{
	//メンバー変数をクリア
	m_nLife = 0;
	m_nAttack = 0;
	m_nSpeed = 0;
}

//===================================================
//デストラクタ
//===================================================
CEnemy::~CEnemy()
{

}

//===================================================
//初期化
//===================================================
void CEnemy::Init()
{
	m_nLife = 0;
	m_nAttack = 0;
	m_nSpeed = 0;
}

//===================================================
//終了
//===================================================
void CEnemy::Uninit()
{

}

//===================================================
//入力
//===================================================
void CEnemy::Input()
{
	printf("\n 《 敵のステータスを設定 》\n");

	printf("\n 体力     > ");	//体力
	scanf("%d", &m_nLife);

	printf(" 攻撃力   > ");		//攻撃力
	scanf("%d", &m_nAttack);

	printf(" すばやさ > ");		//すばやさ
	scanf("%d", &m_nSpeed);
}

//===================================================
//出力
//===================================================
void CEnemy::Output()
{
	printf("\n 《 敵のステータスはこちら 》\n");

	printf("\n [ 体力 : %d /", m_nLife);	//体力
	printf(" 攻撃力 : %d /", m_nAttack);	//攻撃力
	printf(" すばやさ : %d ]\n", m_nSpeed);	//すばやさ
}