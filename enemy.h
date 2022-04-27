//===================================================
//
//授業その2[enemy.h]
//Author:KishimotoEiji
//
//===================================================
#ifndef _ENEMY_H_
#define _ENEMY_H_

//********************************
//敵のクラス定義
//********************************
class CEnemy
{/* 基本クラス */
public:		/* 列挙型の定義 */
	enum class ENEMY_TYPE
	{
		HUMAN = 0,	//人型
		BIRD,		//鳥型
		MAX,
		NONE
	};

public:		/* コンストラクタ・デストラクタ */
	CEnemy();
	~CEnemy();

public:		/* メンバー関数宣言 */
	void Init();					//初期化
	void Uninit();					//終了
	void Input();					//入力
	void Output();					//出力
	ENEMY_TYPE SelectEnemyType();	//敵の種類を選ぶ

private:	/* メンバー変数宣言 */
	int m_nLife;	//体力
	int m_nAttack;	//攻撃力
};

//********************************
//人型の敵のクラス定義
//********************************
class CEnemyHuman : public CEnemy
{/* CEnemyの派生クラス */
public:		/* コンストラクタ・デストラクタ */
	CEnemyHuman();
	~CEnemyHuman();

public:		/* メンバー関数宣言 */
	void Init();	//初期化
	void Uninit();	//終了
	void Input();	//入力
	void Output();	//出力

private:	/* メンバー変数宣言 */
	int m_nSpeedWalk;	//歩くスピード
};

//********************************
//鳥型の敵のクラス定義
//********************************
class CEnemyBird : public CEnemy
{/* CEnemyの派生クラス */
public:		/* コンストラクタ・デストラクタ */
	CEnemyBird();
	~CEnemyBird();

public:		/* メンバー関数宣言 */
	void Init();	//初期化
	void Uninit();	//終了
	void Input();	//入力
	void Output();	//出力

private:	/* メンバー変数宣言 */
	int m_nSpeedFly;	//飛行スピード
};
#endif