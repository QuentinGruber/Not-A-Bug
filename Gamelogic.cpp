
#include <iostream>
#include "UsefulFunc.h"
#include <Windows.h>
#include "Game.h"



void init_p1() {
	system("color B1"); // set color bg for the level
	print_Dialog("Hello World!\n",100);
	print_Dialog("Wanna install the best game of all time?", 100);
	WaitKeyPress();
	system("CLS");
	FakeLoading();
	BugAppear();

	}