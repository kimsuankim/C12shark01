#include <stdio.h>
#include <stdlib.h>
#define BOARDSTATUS_OK   1
#define BOARDSTATUS_NOK   0 //�����Լ��� �˷����� 
#define N_BOARD   15

//�����ʱ�ȭ
int board_initBoard(void);

//��ü���� ���� ���
int board_printBoardStatus(void);

//���� ���� ���
int board_getBoardCoin(int pos);

//��� ��ġ ���
int board_getSharkposition(void);

//��� ���� ���
int board_stepShark(void);

//Ư�� ĭ�� �ļ� ���� ���
int board_getBoardStatus(int pos);

