

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
	while (true) {
		BgBlinking(100);
		print("[FATAL ERROR] \n");
	}
}