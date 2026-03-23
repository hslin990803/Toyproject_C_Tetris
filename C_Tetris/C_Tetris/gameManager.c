static int isGameOver = 0; // 1일 경우 게임오버, 0일 경우 게임 진행 중
static int posX = 4;
static int posY = 2;		// gotoxy 출력용, 기본 포지션

int getIsGameOver() {
	return isGameOver;
}

void setGameOver(int value) {
	isGameOver = value;
}

int getPosX() {
	return posX;
}

void setPosX(int value) {
	posX = value;
}

int getPosY() {
	return posY;
}

void setPosY(int value) {
	posY = value;
}