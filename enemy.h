//===================================================
//
//授業その2[enemy.h]
//Author:KishimotoEiji
//
//===================================================
#ifndef _ENEMY_H_
#define _ENEMY_H_

//********************************
//敵クラスの定義
//********************************
class CEnemy
{
public:		/* コンストラクタ・デストラクタ */
	CEnemy();
	~CEnemy();

public:		/* メンバー関数宣言 */
	void Init();	//初期化
	void Uninit();	//終了
	void Input();	//入力
	void Output();	//出力

private:	/* メンバー変数宣言 */
	int m_nLife;	//体力
	int m_nAttack;	//攻撃力
	int m_nSpeed;	//すばやさ
};
#endif