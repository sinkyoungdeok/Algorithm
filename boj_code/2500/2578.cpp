#include <iostream>
#include <cstring>
#include <cstdio>
#include <cmath>
#include <string>
using namespace std;
int main()
{
	int bingo[5][5];
	for (int i = 0; i < 5; i++)
		for (int j = 0; j < 5; j++)
			cin >> bingo[i][j];
	int gamecheck = 0;
	for(int i=1;i<=25;i++)
	{
		int a;
		cin >> a;
		if (gamecheck == 0) {
			for (int i = 0; i < 5; i++)
				for (int j = 0; j < 5; j++)
					if (a == bingo[i][j])
						bingo[i][j] = 0;

			int bingocheck = 0;
			for (int i = 0; i < 5; i++)
			{
				if (bingo[i][0] == 0 && bingo[i][1] == 0 && bingo[i][2] == 0 && bingo[i][3] == 0 && bingo[i][4] == 0)
					bingocheck++;
				if (bingo[0][i] == 0 && bingo[1][i] == 0 && bingo[2][i] == 0 && bingo[3][i] == 0 && bingo[4][i] == 0)
					bingocheck++;
			}
			if (bingo[0][0] == 0 && bingo[1][1] == 0 && bingo[2][2] == 0 && bingo[3][3] == 0 && bingo[4][4] == 0)
				bingocheck++;
			if (bingo[0][4] == 0 && bingo[1][3] == 0 && bingo[2][2] == 0 && bingo[3][1] == 0 && bingo[4][0] == 0)
				bingocheck++;

			if (bingocheck >= 3) {
				gamecheck = 1;
				cout << i << endl;
			}
		}

	}
	return 0;
}
