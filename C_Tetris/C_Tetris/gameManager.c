#include "gameManager.h"

static int isGameOver = 0; // 1일 경우 게임오버, 0일 경우 게임 진행 중
static int printPosX = 4;		// gotoxy 출력용, 기본 포지션
static int printPosY = 2;		// gotoxy 출력용, 기본 포지션

static int spawnBlockPosX = 8;	// 블럭 스폰 포지션
static int spawnBlockPosY = 0;	// 블럭 스폰 포지션

int getIsGameOver() {
	return isGameOver;
}

void setGameOver(int value) {
	isGameOver = value;
}

int getPrintPosX() {
	return printPosX;
}

void setPrintPosX(int value) {
	printPosX = value;
}

int getPrintPosY() {
	return printPosY;
}

void setPrintPosY(int value) {
	printPosY = value;
}

int getSpawnBlockPosX() {
	return spawnBlockPosX;
}

void setSpawnBlockPosX(int value) {
	spawnBlockPosX = value;
}

int getSpawnBlockPosY() {
	return spawnBlockPosY;
}

void setSpawnBlockPosY(int value) {
	spawnBlockPosY = value;
}