#include <stdio.h>
#include <stdlib.h>
#include "board.h"

#define N_BOARD   15
#define BOARDSTATUS_OK   1
#define BOARDSTATUS_NOK   0
#define N_COINPOS  12
#define MAX_COIN  4

#define SHARK_INITPOS   -4
#define MAX_SHARKSTEP    6
static int board_status[N_BOARD];//�ļտ��� 
static int board_coin[N_BOARD];//ĭ���� ���ΰ��� 

//�����ġ
static int board_sharkPosition; //data incapsulation 

//�����ʱ�ȭ 
int board_initBoard(void)
{
	int i;
	for(i=0;i<N_BOARD;i++)
	{
		board_status[i] = BOARDSTATUS_OK;
		board_coin[i] = 0;
	 } //���������ʱ�ȭ 
	
	//�����ġ �ʱ�ȭ
	board_sharkPosition = SHARK_INITPOS;
	//���� �Ҵ� 
	for(i=0;i<N_COINPOS;i++)//�����ǹ��� 
	{
		int flag = 0; 
		while(flag == 0)
		{
			//�������� ĭ ��������
			int allocpos = rand()%N_BOARD;
			//ĭ�� ����������
			if(board_coin[allocpos] == 0)
			{
				board_coin[allocpos] = rand()%MAX_COIN+1;//1����4 
				
				flag = 1;
			}
			
		}
	}
	return 0; 
}

//��ü���� ���� ���
int board_printBoardStatus(void)
{
	int i;
	printf("-----------------BOARD STATUS-------------------\n");
	for(i=0;i<N_BOARD;i++)
	{
		printf("|");
		if(board_status[i] == BOARDSTATUS_NOK)
		 printf("X");
		else
		 printf("O");
	}
	printf("|\n");
	printf("-----------------------------------------------\n");
	
	return 0;
}

//���� ���� ���
int board_getBoardCoin(int pos)
{
	int coin = board_coin[pos]; //��������� 
	board_coin[pos] = 0; //�ѹ��ֿ�� ������ 
	
	return coin; //������0�� ��ȯ��-���������ʿ�
}

//��� ��ġ ���
int board_getSharkposition(void);


//Ư�� ĭ�� �ļ� ���� ���
int board_getBoardStatus(int pos)
{
	return board_status[pos]; //����ü�� ������ 0,1 
}
//��� ���� ���
int board_stepShark(void)
{
	int step = rand()%MAX_SHARKSTEP+1;
	int i;
	for(i=board_sharkPosition;i<=board_sharkPosition+step; i++) //i�� �ٷ���� ĭ
	{
		if(i>=0 && i<N_BOARD)
		board_status[i] = BOARDSTATUS_NOK; 
	 } 
	board_sharkPosition += step;
	return board_sharkPosition;
}
