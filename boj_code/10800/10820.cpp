#include <iostream>
#include <string.h>
using namespace std;
int main()
{
	char *st = new char[101];
	while (cin.getline(st, 101)) {
		int small = 0;
		int large = 0;
		int num = 0;
		int blank = 0;

		for (int j = 0; j < strlen(st); j++) {
			if ('0' <= st[j] && st[j] <= '9')
				num++;
			else if ('a' <= st[j] && st[j] <= 'z')
				small++;
			else if ('A' <= st[j] && st[j] <= 'Z')
				large++;
			else if (st[j] == ' ')
				blank++;
		}

		cout << small << " " << large << " " << num << " " << blank << endl;



	}
	delete[]st;
	return 0;
}
//0~9 --> 48~57 
//a~z --> 97->122
//A~Z --> 65->90
