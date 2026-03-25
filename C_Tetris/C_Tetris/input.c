#include <conio.h>
#include <stdio.h>

#include "input.h"
#include "config.h"

void inputKey() {
	int key = getKey();

	switch (key) {
	case KEY_UP:
		printf("key up");
		break;
	case KEY_DOWN:
		printf("key down");
		break;
	case KEY_LEFT:
		printf("key left");
		break;
	case KEY_RIGHT:
		printf("key right");
		break;
	case KEY_Z:
		printf("key z");
		break;
	case KEY_X:
		printf("key x");
		break;
	case KEY_C:
		printf("key c");
		break;
	case KEY_SPACE:
		printf("key space");
		break;
	}
}

int getKey() {
	if (_kbhit()) {
		int ch = _getch();

		if (ch == 0 || ch == 224) {
			ch = _getch();
		}
		return ch;
	}
	return -1;
}