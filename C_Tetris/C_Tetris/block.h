#ifndef _BLOCK_H_
#define _BLOCK_H_

int getBlock(int block, int y, int x);
void setBlock(int value, int block, int y, int x);

void reverseRotateBlock(int block[4][4]);	// 오른쪽으로 90도 회전
void forwardRotateBlock(int block[4][4]);	// 역방향 회전 (-90도, 왼쪽 회전)
#endif	