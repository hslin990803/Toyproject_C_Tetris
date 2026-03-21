#include <stdio.h>

#include "util.h"
#include "gameManager.h"
#include "init.h"
#include "block.h"

#define MAX_WIDTH 12
#define MAX_HEIGHT 22

#define EMPTY 0		// 빈 곳
#define BLOCK 1		// 움직이는 블럭
#define WALL 4		// 벽

int gameBoard[MAX_WIDTH][MAX_HEIGHT] = { 0 };		// 게임보드
int posX = 4, posY = 2;		// gotoxy 출력용, 기본 포지션

// 초기화 함수
void init();
void setGameBoard();

// 출력 함수
void drawBoard();
void drawBlock();
// 기타

int main()
{
	init();

	while (isGameOver != 1) {
		drawBlock();
		/*drawBoard();*/
	}

	return 0;
}

void init() {
	hideCursor();
	isGameOver = 0;

	setGameBoard();
}

void setGameBoard() {
	for (int i = 0; i < MAX_HEIGHT; i++) {
		gameBoard[0][i] = WALL;
		gameBoard[MAX_WIDTH - 1][i] = WALL;
	}

	for (int i = 1; i < MAX_WIDTH - 1; i++) {
		gameBoard[i][MAX_HEIGHT - 1] = WALL;
	}
}

void drawBoard() {
	for (int i = 0; i < MAX_HEIGHT; i++) {
		for (int j = 0; j < MAX_WIDTH; j++) {
			gotoxy(posX + j * 2, posY + i);
			switch (gameBoard[j][i]) {
			case EMPTY:
				printf(" ");
				break;
			case BLOCK:
				printf("■");
				break;
			case WALL:
				printf("▣");
				break;
			//case EMPTY:	// 테스트용
			//	printf("%d", gameBoard[j][i]);
			//	break;
			//case BLOCK:
			//	printf("%d", gameBoard[j][i]);
			//	break;
			//case WALL:
			//	printf("%d", gameBoard[j][i]);
			//	break;
			}
		}
	}
}

void drawBlock() {
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 4; j++) {
			gotoxy(posX + j * 2, posY + i);
			switch (blocks[0][j][i]) {
			case EMPTY:
				printf(" ");
				break;
			case BLOCK:
				printf("■");
				break;
			case WALL:
				printf("▣");
				break;
				//case EMPTY:	// 테스트용
				//	printf("%d", blocks[0][j][i]);
				//	break;
				//case BLOCK:
				//	printf("%d", blocks[0][j][i]);
				//	break;
				//case WALL:
				//	printf("%d", blocks[0][j][i]);
				//	break;
			}
		}
	}
}