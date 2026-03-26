#ifndef _CONFIG_H_		// 매크로 정의
#define _CONFIG_H_

#define MAX_WIDTH 12
#define MAX_HEIGHT 23

#define QUE_SIZE 15		// 넥스트 큐 사이즈

#define EMPTY 0			// 빈 곳
#define BLOCK 1			// 움직이는 블럭
#define FIXED_BLOCK 2	// 굳어진 블럭
#define GHOST_BLOCK 3	// 고스트 블럭
#define WALL 4			// 벽

#define KEY_UP 72		// 상(오른쪽으로 회전) 72
#define KEY_DOWN 80		// 하(소프트 드랍)	 80
#define KEY_LEFT 75		// 좌(왼쪽으로 블럭 이동) 75
#define KEY_RIGHT 77	// 우(오른쪽으로 블럭 이동) 77
#define KEY_SPACE 32	// 스페이스(하드 드랍) 32
#define KEY_Z 122		// z(왼쪽으로 회전) 122
#define KEY_X 120		// x(오른쪽으로 회전) 120
#define KEY_C 99		// c(홀드) 99

#endif 