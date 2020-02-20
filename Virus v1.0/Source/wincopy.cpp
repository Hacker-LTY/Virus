#include <bits/stdc++.h>
#include <windows.h>
using namespace std;
int main() {
	system("chcp 65001");
	system("msg /server:localhost * \"A problem has been detected and windows has been shut down to prevent damage to your computer!!!\"");
	for (int i = 0; true; i++) {
		if (i % 10 == 0) printf("%c", '\a');
		system("color 14");
		printf("WARNING! ");
		system("color 41");
		printf("Error! ");
	}
	return 0;
}
