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

//********************************
//�萔�̒�`
//********************************
namespace
{
const int MAX_ENEMY = 3;		//�G�̍ő吔
const int MIN_ENEMY = 1;		//�G�̍ŏ���
}// namespace�͂����܂�

 //********************************
 //�v���g�^�C�v�錾
 //********************************
namespace
{
int SelectEnemyType();
int SetNumEnemy();
}// namespace�͂����܂�

//===================================================
//���C���֐�
//===================================================
void main(void)
{
	CEnemyHuman* pEnemyHuman = nullptr;		//�l�^�̓G���|�C���^
	CEnemyBird* pEnemyBird = nullptr;		//���^�̓G���|�C���^

	//��������G��I��
	int nEnemyType = SelectEnemyType();

	//�G�̐���ݒ�
	int nNumEnemy = SetNumEnemy();

	switch ((CEnemy::ENEMY_TYPE)nEnemyType)
	{
	case CEnemy::ENEMY_TYPE::HUMAN:		/* �l�^ */

		if (pEnemyHuman == nullptr)
		{//NULL�`�F�b�N
			//�������̓��I�m��
			pEnemyHuman = new CEnemyHuman[nNumEnemy];
		}

		for (int i = 0; i < nNumEnemy; i++)
		{//������
			pEnemyHuman[i].Init();
		}

		for (int i = 0; i < nNumEnemy; i++)
		{//����
			//���݂̐ݒ萔��\��
			printf("\n �s %d�̖� �t", (i + 1));
			pEnemyHuman[i].Input();
		}

		for (int i = 0; i < nNumEnemy; i++)
		{//�o��
			//�ݒ萔��\��
			printf("\n �s %d�̖� �t", (i + 1));
			pEnemyHuman[i].Output();
		}

		for (int i = 0; i < nNumEnemy; i++)
		{//�I��
			pEnemyHuman[i].Uninit();
		}
		
		if (pEnemyHuman != nullptr)
		{//NULL�`�F�b�N
			//�������̉��
			delete[] pEnemyHuman;
			pEnemyHuman = nullptr;
		}
		break;

	case CEnemy::ENEMY_TYPE::BIRD:		/* ���^ */

		if (pEnemyBird == nullptr)
		{//NULL�`�F�b�N
			//�������̓��I�m��
			pEnemyBird = new CEnemyBird[nNumEnemy];
		}
		for (int i = 0; i < nNumEnemy; i++)
		{//������
			pEnemyBird[i].Init();
		}

		for (int i = 0; i < nNumEnemy; i++)
		{//����
			//���݂̐ݒ萔��\��
			printf("\n �s %d�̖� �t", (i + 1));
			pEnemyBird[i].Input();
		}

		for (int i = 0; i < nNumEnemy; i++)
		{//�o��
			//�ݒ萔��\��
			printf("\n �s %d�̖� �t", (i + 1));
			pEnemyBird[i].Output();
		}

		for (int i = 0; i < nNumEnemy; i++)
		{//�I��
			pEnemyBird[i].Uninit();
		}
		
		if (pEnemyBird != nullptr)
		{//NULL�`�F�b�N
			//�������̉��
			delete[] pEnemyBird;
			pEnemyBird = nullptr;
		}
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

namespace
{
//===================================================
//�G�̎�ނ�I��
//===================================================
int SelectEnemyType()
{
	int nType = 0;	//�^�C�v�I��p

	while (1)
	{
		//���b�Z�[�W
		printf("\n �s ��������G��I�� �t");
		printf("\n [ %d ] �l�^", CEnemy::ENEMY_TYPE::HUMAN);
		printf("\n [ %d ] ���^", CEnemy::ENEMY_TYPE::BIRD);
		printf("\n �ԍ������ > ");
		scanf("%d", &nType);

		if ((nType > (int)(CEnemy::ENEMY_TYPE::NONE)) && (nType < (int)(CEnemy::ENEMY_TYPE::MAX)))
		{//�͈͓�
			break;
		}

		/* �͈͊O */

		//���b�Z�[�W
		printf("\n �� �͈͊O�ł��B ��");

		//Enter���͑҂�
		printf("\n\n Press Enter");
		rewind(stdin);
		getchar();

		//��ʂ��N���A
		system("cls");
	}

	return nType;	//�I�������ԍ���Ԃ�
}

//===================================================
//�G�̐���ݒ�
//===================================================
int SetNumEnemy()
{
	int nNumEnemy = 0;	//�G�̐��ݒ�p

	while (1)
	{
		//���b�Z�[�W
		printf("\n �G�̐������( %d�̂܂� ) > ", MAX_ENEMY);
		scanf("%d", &nNumEnemy);

		if ((nNumEnemy >= MIN_ENEMY) && (nNumEnemy <= MAX_ENEMY))
		{//�͈͓�
			break;
		}

		/* �͈͊O */

		//���b�Z�[�W
		printf("\n �� �͈͊O�ł��B ��");

		//Enter���͑҂�
		printf("\n\n Press Enter");
		rewind(stdin);
		getchar();

		//��ʂ��N���A
		system("cls");
	}

	//��ʂ��N���A
	system("cls");

	return nNumEnemy;	//�I�������ԍ���Ԃ�
}
}// namespace�͂����܂�