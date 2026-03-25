#include <stdio.h>

#include "draw.h"
#include "util.h"
#include "gameManager.h"
#include "block.h"
#include "board.h"
#include "config.h"

void drawBoard() {
	for (int y = 0; y < MAX_HEIGHT; y++) {
		for (int x = 0; x < MAX_WIDTH; x++) {
			gotoxy(getPrintPosX() + x * 2, getPrintPosY() + y);
			switch (getCell(y,x)) {
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
			//	printf("%d", getCell(y, x));
			//	break;
			//case BLOCK:
			//	printf("%d", getCell(y, x));
			//	break;
			//case WALL:
			//	printf("%d", getCell(y, x));
			//	break;
			}
		}
	}
}

// 블럭 관련 테스트용 출력 (제거 예정)
void drawBlock() {
	for (int y = 0; y < 4; y++) {
		for (int x = 0; x < 4; x++) {
			gotoxy(getSpawnBlockPosX() + getPrintPosX() + x * 2, getSpawnBlockPosY() + getPrintPosY() + y);
			switch (getBlock(0, y, x)) {
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
			//	printf("%d", getBlock(0, y, x));
			//	break;
			//case BLOCK:
			//	printf("%d", getBlock(0, y, x));
			//	break;
			//case WALL:
			//	printf("%d", getBlock(0, y, x));
			//	break;
			}
		}
	}
}