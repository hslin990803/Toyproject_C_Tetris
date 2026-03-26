#ifndef _GAMEMANAGER_H_
#define _GAMEMANAGER_H_
#include "config.h"

int getIsGameOver();
void setGameOver(int value);

int getPrintPosX();
void setPrintPosX(int value);

int getPrintPosY();
void setPrintPosY(int value);

int getSpawnBlockPosX();
void setSpawnBlockPosX(int value);

int getSpawnBlockPosY();
void setSpawnBlockPosY(int value);

// 원형 큐 구조체
typedef struct {
	int data[QUE_SIZE];	// 데이터를 담을 배열
	int front;		// 큐의 시작
	int rear;		// 큐의 끝
} NextList;

void initQue(NextList* que);
int isQueEmpty(NextList* que);
int isQueFull(NextList* que);
int insertQueue(NextList* que, int value);
int deleteQueue(NextList* que);
#endif 