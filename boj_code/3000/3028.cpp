#include <iostream>
#include <string.h>
using namespace std;
int main() {
	char *num = new char[60];
	cin >> num;
	int ball[3];
	ball[0] = 1;
	ball[1] = 0;
	ball[2] = 0;
	for (int i = 0; num[i] != NULL; i++)
	{
		if (num[i] == 'A')
		{
			int swap = ball[0];
			ball[0] = ball[1];
			ball[1] = swap;
		}
		else if (num[i] == 'B')
		{
			int swap = ball[1];
			ball[1] = ball[2];
			ball[2] = swap;
		}
		else
		{
			int swap = ball[2];
			ball[2] = ball[0];
			ball[0] = swap;
		}
	}
	for (int i = 0; i < 3; i++)
	{
		if (ball[i] == 1)
		{
			cout << i + 1 << endl;
			break;
		}
	}
	return 0;
}
