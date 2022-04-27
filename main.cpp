//===================================================
//
//���Ƃ���2[main.cpp]
//Author:KishimotoEiji
//
//===================================================

//********************************
//�C���N���[�h
//********************************
#include "main.h"
#include "enemy.h"

#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

//===================================================
//���C���֐�
//===================================================
void main(void)
{
	CEnemy enemy;								//�G���
	CEnemyHuman enemyHuman[CEnemy::MAX_ENEMY];	//�l�^�̓G���
	CEnemyBird enemyBird[CEnemy::MAX_ENEMY];	//���^�̓G���

	//�G�̐���ݒ�
	int nNumEnemy = enemy.SetNumEnemy();

	for (int i = 0; i < nNumEnemy; i++)
	{
		//���݂̐ݒ萔��\��
		printf("\n �s %d�̖� �t", (i + 1));

		//��������G��I��
		CEnemy::ENEMY_TYPE nEnemyType = enemy.SelectEnemyType();

		switch (nEnemyType)
		{
		case CEnemy::ENEMY_TYPE::HUMAN:		/* �l�^ */

			enemyHuman[i].Init();		//������
			enemyHuman[i].Input();		//����
			enemyHuman[i].Output();		//�o��
			enemyHuman[i].Uninit();		//�I��
			break;

		case CEnemy::ENEMY_TYPE::BIRD:		/* ���^ */

			enemyBird[i].Init();	//������
			enemyBird[i].Input();	//����
			enemyBird[i].Output();	//�o��
			enemyBird[i].Uninit();	//�I��
			break;

		default:
			assert(false);
			break;
		}
	}

	//�I�����b�Z�[�W
	printf("\n �v���O�������I�����܂��B�����l�ł����B");

	//Enter���͑҂�
	printf("\n\n Press Enter");
	rewind(stdin);
	getchar();
}