//===================================================
//
//���Ƃ���2[main.cpp]
//Author:KishimotoEiji
//
//===================================================

//*************************************
//�C���N���[�h
//*************************************
#include "main.h"
#include "enemy.h"

#include <stdio.h>
#include <stdlib.h>

//===================================================
//���C���֐�
//===================================================
void main(void)
{
	CEnemy enemy;	//�G���

	//������
	enemy.Init();

	//����
	enemy.Input();

	//��ʂ��N���A
	system("cls");

	//�o��
	enemy.Output();

	//�I��
	enemy.Uninit();

	//�I�����b�Z�[�W
	printf("\n �v���O�������I�����܂��B�����l�ł����B");

	//Enter���͑҂�
	printf("\n\n Press Enter");
	rewind(stdin);
	getchar();
}