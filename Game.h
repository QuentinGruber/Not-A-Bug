void FakeLoading() {  // display a fake loading

	for (int i = 0; i < 100; i++) // display 99% at last
	{
		cout << i<<"% Loading";
		Sleep(10);
		system("CLS");
	}
}

void BgBlinking(int BlinkingSpeed) {
	system("color B1");
	Sleep(BlinkingSpeed);
	system("color C1");
	Sleep(BlinkingSpeed);

}
void BugAppear() {
	system("color C1");  // make bg red
	print("99% Loading\n");
	for (int i = 0; i < 30; i++) { 
		BgBlinking(100);
		print("[FATAL ERROR] BUG DETECTED IN THE INSTALLATION ABORT! \n");
	}
	print("Reebooting...");
	Sleep(2000);
	system("color 01"); // Black screen
	system("CLS");
}

void CreateDir() {
	if (dirExists("\NO_PASSWORD_HERE") == false) {
		system("mkdir \ NO_PASSWORD_HERE");
	}
	ofstream myfile;
	myfile.open("GtA6.txt");
	myfile << "ow lol u juici bug , your not gonna get the password hehe!";
	myfile.close();
}

void Update_GTa6(string password) {
	ofstream myfile;
	myfile.open("GtA6.txt");
	myfile << "The Password is "+password+"2";
	myfile.close();

}