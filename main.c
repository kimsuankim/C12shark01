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
	//1.초기화, 플레이어 이름
	board_initBoard();
	//2.반복문(각플레이어턴)
	do{
		int step = rolldie();
		int coinResult;
		char c;
		
		pos += step;
		printf("이동했습니다");
		coinResult = board_getBoardCoin(pos);
		
		scanf("%d", &c);
		//??flush(stdin);
	}while(1);
	//2.1.상태출력 
	//2.2.주사위던지기
	
	//2.3.이동
	//2.4.코인얻기
	//2.5.다음턴
	//2.6.상어동작(조건: 모든플레이어 한번씩 턴지난후) 
	//3.게임끝(승자계산, 출력) 
	return 0;
}
