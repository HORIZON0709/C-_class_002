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
	CEnemy enemy;			//�G���
	CEnemyHuman enemyHuman;	//�l�^�̓G���
	CEnemyBird enemyBird;	//���^�̓G���

	//��������G��I��
	CEnemy::ENEMY_TYPE nEnemyType = enemy.SelectEnemyType();

	switch (nEnemyType)
	{
	case CEnemy::ENEMY_TYPE::HUMAN:		//�l�^
		
		enemyHuman.Init();	//������
		enemyHuman.Input();	//����

		//��ʂ��N���A
		system("cls");

		enemyHuman.Output();	//�o��
		enemyHuman.Uninit();	//�I��
		break;

	case CEnemy::ENEMY_TYPE::BIRD:		//���^
		
		enemyBird.Init();	//������
		enemyBird.Input();	//����

		//��ʂ��N���A
		system("cls");

		enemyBird.Output();	//�o��
		enemyBird.Uninit();	//�I��
		break;

	default:
		assert(false);
		break;
	}

	//�I�����b�Z�[�W
	printf("\n �v���O�������I�����܂��B�����l�ł����B");

	//Enter���͑҂�
	printf("\n\n Press Enter");
	rewind(stdin);
	getchar();
}