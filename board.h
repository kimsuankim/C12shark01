#include <stdio.h>
#include <stdlib.h>
#define BOARDSTATUS_OK   1
#define BOARDSTATUS_NOK   0 //�����Լ��� �˷����� 

//�����ʱ�ȭ
int board_initBoard(void);

//��ü���� ���� ���
int board_printBoardStatus(void);

//���� ���� ���
int board_getBoardCoin(int pos);

//��� ��ġ ���
int board_sharkposition(void);

//��� ���� ���
int board_moveshark(void);

//Ư�� ĭ�� �ļ� ���� ���
void board_getBoardStatus(int pos);
