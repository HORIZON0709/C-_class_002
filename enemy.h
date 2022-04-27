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
		NONE = 0,
		HUMAN,	//人型
		BIRD,	//鳥型
		MAX,
	};

public:		/* コンストラクタ・デストラクタ */
	CEnemy();
	~CEnemy();

public:		/* メンバー関数宣言 */
	void Init();					//初期化
	void Uninit();					//終了
	void Input();					//入力
	void Output();					//出力

public:	/* 定数の定義 */
	static const int MAX_ENEMY = 3;		//敵の最大数
	static const int MIN_ENEMY = 1;		//敵の最少数

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