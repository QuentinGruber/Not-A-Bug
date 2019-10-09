
#include <iostream>
#include <fstream> // for creating files
#include "UsefulFunc.h"
#include <Windows.h>
#include "Game.h"
#pragma comment(lib, "Winmm.lib")  // for song

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
Part 2 is introduction to the bug who ask us to find a password
*/

void init_p2() {

	string answer; // init answer string
	system("color 07"); // white and black screen

	// Dialogs
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
	print_Dialog("I have hide a secret password in my folder.\n", 100);
	print_Dialog("A bug would never find it ;) :\n", 100);

	// find the password
	print("Enter Password:\n");
	CreateDir();
	cin >> answer;

	// the actual password is your first attemps + "2"
	string RealPassWord = answer + "2";
	Update_GTa6(answer);
	int Wrong_answer_attemps = 0;

	// loop for password asking
	while (answer != RealPassWord) {
		Wrong_answer_attemps++; 

		if (Wrong_answer_attemps > 5) {  // if as more than 5 attemps (looser)
			print_Dialog("WRONG PASSWORD maybe look inside gta6.txt *cough* *cough* ;) :\n", 100);
			cin >> answer;
		}
		else {
			print_Dialog("WRONG PASSWORD try again ;) :\n", 100);
			cin >> answer;
		}
	}
}

/*
Part 3 
*/

void init_p3() {
	system("CLS");
	Sleep(2000);
	print_Dialog("Ok maybe your ", 100);
	print_Dialog("a good bug.\n", 50);
	Sleep(1000);
	print_Dialog("i will destroy you...\n", 100);
	system("color a"); // green color

	double StartTime = GetTickCount64();
	while ((GetTickCount64() - StartTime) < 10000) {  // dir/s during 10sec min
		system("dir/s");
	}
	system("CLS");
	system("color 07"); // white and black screen
	print_Dialog("HOW DO YOU SURVIVE DIR/S ????\n", 50);
	Sleep(1000);
	print_Dialog("And WHAT are you doing with this???", 50);
	Sleep(500);
	for (int i = 0; i < 50; i++) {  // open 10 command prompt
		system("start");
	}

	print(":-)\n");
	string answer;
	cin >> answer;

	print_Dialog("oh your still there...\n", 100);
	print_Dialog("You know i'm not a bug...\n", 100);
	print_Dialog("i'm a ", 1000);

}

/*
end
*/

void init_p4() {
	system("cls");
	system("color B1"); // set color bg for the level
	print_Dialog("A short game made by Kbent1_dev \n", 100);
	print_Dialog("for the Weekly Game Jam - Week 117\n", 100);
	print_Dialog("Week 117 Theme: 'Not a Bug'\n", 100);
	print_Dialog("Thanks for playing :D !",100);
	WaitKeyPress();
}