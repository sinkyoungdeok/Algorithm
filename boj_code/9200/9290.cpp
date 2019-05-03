#include <cstdio>
#include <cctype>
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
	int t = 0;
	cin >> t;
	for (int i = 1; i <= t; i++)
	{
		char tic[3][3];
		char num;
		
		for (int j = 0; j < 3; j++)
			for (int k = 0; k < 3; k++)
				cin >> tic[j][k];
		cin >> num;
		int check = 0;
		for (int j = 0; j < 3; j++)
		{
			for (int k = 0; k < 3; k++)
			{
				if (tic[j][k] == '-')
				{
					tic[j][k] = num;
					int game = 0;
					if (tic[0][0] == num && tic[0][1] == num && tic[0][2] == num)
						game = 1;
					else if (tic[1][0] == num && tic[1][1] == num && tic[1][2] == num)
						game = 1;
					else if (tic[2][0] == num && tic[2][1] == num && tic[2][2] == num)
						game = 1;
					else if (tic[0][0] == num && tic[1][0] == num && tic[2][0] == num)
						game = 1;
					else if (tic[0][1] == num && tic[1][1] == num && tic[2][1] == num)
						game = 1;
					else if (tic[0][2] == num && tic[1][2] == num && tic[2][2] == num)
						game = 1;
					else if (tic[0][0] == num && tic[1][1] == num && tic[2][2] == num)
						game = 1;
					else if (tic[0][2] == num && tic[1][1] == num && tic[2][0] == num)
						game = 1;

					if (game == 0)
						tic[j][k] = '-';
					else
					{
						check = 1;
						break;
					}
				}



			}
			if (check == 1)
				break;
		}
		cout << "Case " << i << ":" << endl;
		for (int j = 0; j < 3; j++) {
			for (int k = 0; k < 3; k++)
				cout << tic[j][k];
			cout << endl;
		}

	}
	return 0;
}
