#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "board.h"

#define MAX_DIE  6

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void opening(void)
{
	printf("=============WELCOME=============\n");
	printf("============SHARK_GAME===========\n");
	printf("==============START==============\n");
}
int rolldie(void)
{
	return reand()%MAX_DIE+1;
}
int main(int argc, char *argv[]) {
	
	int pos = 0;
	srand((unsigned)time(NULL));
	
	//0.opening
	opening();
	//1.�ʱ�ȭ, �÷��̾� �̸�
	board_initBoard();
	//2.�ݺ���(���÷��̾���)
	do{
		int step = rolldie();
		int coinResult;
		char c;
		
		pos += step;
		printf("�̵��߽��ϴ�");
		coinResult = board_getBoardCoin(pos);
		
		scanf("%d", &c);
		//??flush(stdin);
	}while(1);
	//2.1.������� 
	//2.2.�ֻ���������
	
	//2.3.�̵�
	//2.4.���ξ��
	//2.5.������
	//2.6.����(����: ����÷��̾� �ѹ��� ��������) 
	//3.���ӳ�(���ڰ��, ���) 
	return 0;
}
