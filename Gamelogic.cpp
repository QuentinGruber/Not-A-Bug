
#include <iostream>
#include "UsefulFunc.h"
#include <Windows.h>
#include "Game.h"

/*
Part 1 is the introduction where the bug appear.
*/

void init_p1() {
	system("color B1"); // set color bg for the level
	print_Dialog("Hello World!\n",100);
	print_Dialog("Wanna install the best game of all time?", 100);
	WaitKeyPress();
	system("CLS");
	FakeLoading();
	BugAppear();

	}


/*
Part 2 were doing stuff with the bug that wanna explain to US that is he's not a bug.
*/