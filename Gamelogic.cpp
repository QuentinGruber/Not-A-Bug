
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
	print_Dialog("Don't care about your answer i install it.",10);
	Sleep(1500);
	system("CLS");
	FakeLoading();
	BugAppear();
	}


/*
Part 2 were doing stuff with the bug that wanna explain to US that is he's not a bug.
*/

void init_p2() {

	string answer; // init answer string

	system("color 00"); // need to remove (usuless if p1 is launched)

	Sleep(5000);
	print_Dialog("Oh hello there! \n", 100);
	print_Dialog("Do you know where we are?\n", 100);
	cin >> answer;
	print_Dialog("We are in "+answer+" ?\n", 100);
	Sleep(500);
	print_Dialog("What is wrong with you ???\n", 10);
	print_Dialog("I'M not a BUG YOU DUMBASS\n", 10);
	print_Dialog("...\n", 1000);
	Sleep(500);
	print_Dialog("Oh you didn't said that...\n", 100);
	Sleep(500);
	print_Dialog("I'm afraid of bugs, what if your one of them?\n", 100);
	Sleep(500);
	print_Dialog("I need to test you before we continue to talk\n", 100);
	Sleep(500);
	print_Dialog("I have hide a secret password on your computer Desktop.\n", 100);
	print_Dialog("A bug would never find it ;)\n", 100);
	print("Enter Password:\n");
	CreateDir();
	cin >> answer;
}