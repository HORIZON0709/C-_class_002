//===================================================
//
//���Ƃ���2[enemy.h]
//Author:KishimotoEiji
//
//===================================================
#ifndef _ENEMY_H_
#define _ENEMY_H_

//********************************
//�G�N���X�̒�`
//********************************
class CEnemy
{
public:		/* �R���X�g���N�^�E�f�X�g���N�^ */
	CEnemy();
	~CEnemy();

public:		/* �����o�[�֐��錾 */
	void Init();	//������
	void Uninit();	//�I��
	void Input();	//����
	void Output();	//�o��

private:	/* �����o�[�ϐ��錾 */
	int m_nLife;	//�̗�
	int m_nAttack;	//�U����
	int m_nSpeed;	//���΂₳
};
#endif