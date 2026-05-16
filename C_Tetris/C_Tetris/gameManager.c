#include <stdlib.h> // rand() 사용
#include <time.h> // time() 사용

#include "gameManager.h"
#include "config.h"

static int isGameOver = 0; // 1일 경우 게임오버, 0일 경우 게임 진행 중
static int printPosX = 4;		// gotoxy 출력용, 기본 포지션
static int printPosY = 2;		// gotoxy 출력용, 기본 포지션

static int spawnBlockPosX = 8;	// 블럭 스폰 포지션
static int spawnBlockPosY = 0;	// 블럭 스폰 포지션

static int bag[BAG_SIZE] = { 0,1,2,3,4,5,6 };
static int bagIndex;

static NextList nextQue; // nextQue 선언

void initGameManger() {
    initQue(&nextQue);  // 큐 초기화
    
    for (int i = 0; i < 2; i++) { // 초기 세팅을 위해 2번 삽입
        insertBagToQue();
    }
}

void insertBagToQue() {
    shuffle(bag, BAG_SIZE);

    for (int i = 0; i < BAG_SIZE; i++) {
        insertQueue(&nextQue, bag[i]);
    }
}

int getQueData() {
    return deleteQueue(&nextQue);
}

void shuffle(int* arr, int num) {
    int temp;
    int random;

    for (int i = 0; i < num - 1; i++) {
        random = rand() % (num - i) + i;    // i 부터 num-1 사이에 임의의 정수 생성
        temp = arr[i];
        arr[i] = arr[random];
        arr[random] = temp;
    }
}

// 큐의 front와 rear을 0으로 초기화
void initQue(NextList* que) {
    que->front = 0;
    que->rear = 0;
}

int isQueEmpty(NextList* que) {
	/* 큐가 비어있는 경우, front와 rear은 끝을 가르킴*/
	return que->front == que->rear;
}

int isQueFull(NextList* que) {
    /*큐가 가득찼을 경우, rear가 배열의 끝을 가르킴*/
    return (que->rear + 1) % QUE_SIZE == que->front;
}

//insertQueue는 삽입할 큐와 데이터를 인수로 받는다.
int insertQueue(NextList* que, int value) {
    //가득차있는지 확인
    if (isQueFull(que)) {
        return 0; // 실패
    }
    //가득차있지 않다면
    else {
        //큐의 끝부분을 이동
        que->rear = (que->rear + 1) % QUE_SIZE;
        //데이터 삽입
        que->data[que->rear] = value;

        return 1; // 성공
    }
}

int deleteQueue(NextList* que)
{   //큐가 비어있는지 확인
    if (isQueEmpty(que)) {
        return -1; // 실패
    }

    //front 이동
    que->front = (que->front + 1) % QUE_SIZE;
    //제거한 값 반환
    return que->data[que->front];
}

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