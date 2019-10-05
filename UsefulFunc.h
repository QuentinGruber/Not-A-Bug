#include<string> // for string class 
#include <Windows.h> // for sleep()
using namespace std;


void print_debug(string str) {
	cout << "== DEBUG == "<< str;
}


void print_Dialog(string str,int speed) {
	for (int i = 0;i < str.length(); i++)
	{
		cout << str[i];
		Sleep(speed);
	}
}


void print(string str) {
	cout << str;
}