//===================================================
//
//���Ƃ���2[enemy.h]
//Author:KishimotoEiji
//
//===================================================
#ifndef _ENEMY_H_
#define _ENEMY_H_

//********************************
//�G�̃N���X��`
//********************************
class CEnemy
{/* ��{�N���X */
public:		/* �񋓌^�̒�` */
	enum class ENEMY_TYPE
	{
		HUMAN = 0,	//�l�^
		BIRD,		//���^
		MAX,
		NONE
	};

public:		/* �R���X�g���N�^�E�f�X�g���N�^ */
	CEnemy();
	~CEnemy();

public:		/* �����o�[�֐��錾 */
	void Init();					//������
	void Uninit();					//�I��
	void Input();					//����
	void Output();					//�o��
	ENEMY_TYPE SelectEnemyType();	//�G�̎�ނ�I��

private:	/* �����o�[�ϐ��錾 */
	int m_nLife;	//�̗�
	int m_nAttack;	//�U����
};

//********************************
//�l�^�̓G�̃N���X��`
//********************************
class CEnemyHuman : public CEnemy
{/* CEnemy�̔h���N���X */
public:		/* �R���X�g���N�^�E�f�X�g���N�^ */
	CEnemyHuman();
	~CEnemyHuman();

public:		/* �����o�[�֐��錾 */
	void Init();	//������
	void Uninit();	//�I��
	void Input();	//����
	void Output();	//�o��

private:	/* �����o�[�ϐ��錾 */
	int m_nSpeedWalk;	//�����X�s�[�h
};

//********************************
//���^�̓G�̃N���X��`
//********************************
class CEnemyBird : public CEnemy
{/* CEnemy�̔h���N���X */
public:		/* �R���X�g���N�^�E�f�X�g���N�^ */
	CEnemyBird();
	~CEnemyBird();

public:		/* �����o�[�֐��錾 */
	void Init();	//������
	void Uninit();	//�I��
	void Input();	//����
	void Output();	//�o��

private:	/* �����o�[�ϐ��錾 */
	int m_nSpeedFly;	//��s�X�s�[�h
};
#endif