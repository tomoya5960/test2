#include<stdio.h>

/*
��P��
�ȉ��̌v�Z�ɓ�����B
1011 + 0101 // 
110100 + 11011
1011 + 110011

��Q��
�ȉ��̌v�Z�ɓ�����B
FF + FF
ed + 10
563 + cd

��R��
char�Aint�Afloat�Adouble�̃T�C�Y�͂��ꂼ�ꂢ����������B

char = 1�o�C�g
int =  2�o�C�g
float = 4�o�C�g
double = 8�o�C�g

��S��
int judge = true;
if (judge)
{
	�@
}
else
{
	�A
}
�@�ƇA�ǂ��炪��������邩������B
// �A

��T��
for (int i = 0; i < 100; i = i + 3)
{
	�@
}
�@�̏�����������s����邩������B
// 100��

��U��
int i = 0;
while (i < 100)
{
	i = i + 5;
	�@
}
�@�̏����͉�����s����邩������B
// 20��


��V��
int array[4][5];
��L�z��̃T�C�Y�͂�����������B
// 20?


��W��
int array[5][20]
for (int i = 0; i < 5; ++i)
{
	for (int j = 0; j < �@; ++j)
	{
		array[i][j] = i * �@ + j;
	}
}
�@�ɂ͉��Ƃ������������邩������B
// 20

��X��
�@ testFunc(int a)
{
	return;
}
�@�ɂ�int, float, void�̂ǂꂪ��������������B
// void

��P�O��
�Q�_�Ԃ̋��������߂�֐����쐬���Ă��������B


��P�P��
�J�[�h�\���̂��쐬���Ă��������B
���̃J�[�h�̓g�����v�̃J�[�h�̂��Ƃł��B
���Ƃ��āA�Ȃ�̃J�[�h�Ȃ̂��������Ă��Ă��������B
�X�y�[�h��7�ł���A�n�[�g��13�ł���ȂǁB
���̍\���̂ɂ͌��݂̎����̏���ݒ肷�鏈���ƁA
���݂̎����̏����J�����鏈��������Ă��������B


�g�����v�̎R�D�̍\���̂��쐬���Ă��������B
���̍ۃJ�[�h�ɂ͐�قǍ�����\���̂��g�p���Ă��������B
�ȉ��̏����𖞂����Ă������ƁB
�g�����v�̖�����53��(1 �` 13 * 4 + �W���[�J�[1)
Card card[53];

�V���b�t���@�\����������B
card[53]�Ƀ����_���ɃJ�[�h����t�^���Ă��������B
card[0]���N���u��6�Acard[1]���n�[�g��5�Ƃ������悤�ɁB
���̍ۓ����J�[�h�͑��݂��Ȃ��悤�ɂ��Ă��������B
*/