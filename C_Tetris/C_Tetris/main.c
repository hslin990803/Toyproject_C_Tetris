#include "util.h"
#include "gameManager.h"
#include "init.h"
#include "block.h"
#include "config.h"
#include "board.h"
#include "draw.h"

int main()
{
	init();
	
	while (getIsGameOver() != 1) {
		drawBoard();
		//drawBlock();
	}

	return 0;
}