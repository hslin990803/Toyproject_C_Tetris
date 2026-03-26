#include <stdio.h>
#include <stdlib.h> // rand() 사용
#include <time.h> // time() 사용

#include "util.h"
#include "gameManager.h"
#include "block.h"
#include "config.h"
#include "board.h"
#include "draw.h"
#include "input.h"

int main()
{
	/* 초기 세팅 */
	hideCursor();		// 커서 지우기
	setGameOver(0);		// isGameOver 세팅
	initGameBoard();	// 필드 벽 세팅
	srand((unsigned int)time(NULL)); // 매번 다른 시드값 생성

	while (getIsGameOver() != 1) {
		/*inputKey();*/
		//drawBoard();
		/*drawBlock();*/
	}

	return 0;
}