#include<string> // for string class 
#include <Windows.h> // for sleep()
using namespace std;


void print_debug(string str) {
	cout << "== DEBUG == "<< str;
}


void print_Dialog(string str,int speed) {
	for (unsigned int i = 0;i < str.length(); i++)
	{
		cout << str[i];
		Sleep(speed);
	}
}


void print(string str) {
	cout << str;
}


void WaitKeyPress() {
	string wait;
	cin >> wait;
}

int dirExists(const char* path)
{
	struct stat info;

	if (stat(path, &info) != 0)
		return 0;
	else if (info.st_mode & S_IFDIR)
		return 1;
	else
		return 0;
}