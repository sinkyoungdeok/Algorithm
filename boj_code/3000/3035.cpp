#include <iostream>
#include <cstring>
#include <cstdio>
#include <cmath>
#include <string>
#include <queue>
#include <algorithm>
using namespace std;
int main()
{
	int R, C, ZR, ZC;
	cin >> R >> C >> ZR >> ZC;
	string *num = new string[R];
	for (int i = 0; i < R; i++)
		cin >> num[i];

	for (int i = 0; i < R; i++)
	{
		for (int k = 0; k < ZR; k++) {
			for (int j = 0; j < C; j++)
			{
				for (int q = 0; q < ZC; q++)
					cout << num[i][j];
			}
			cout << endl;
		}
	}
	return 0;
}
