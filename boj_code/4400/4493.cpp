#include <iostream>
using namespace std;
int main()
{
	

	int test = 0;
	cin >> test;
	for (int i = 0; i < test; i++)
	{
		int gamecount = 0;
		cin >> gamecount;
		int player1 = 0;
		int player2 = 0;
		for (int j = 0; j < gamecount; j++)
		{
			char p1;
			char p2;
			cin >> p1 >> p2;
			if (p1 == 'R')
			{
				if (p2 == 'P')
					player2++;
				else if (p2 == 'S')
					player1++;
			}
			else if (p1 == 'S')
			{
				if (p2 == 'P')
					player1++;
				else if (p2 == 'R')
					player2++;
			}
			else if (p1 == 'P')
			{
				if (p2 == 'S')
					player2++;
				else if (p2 == 'R')
					player1++;
			}

			

			
		}
		if (player1 > player2)
			cout << "Player 1" << endl;
		else if (player1 < player2)
			cout << "Player 2" << endl;
		else
			cout << "TIE" << endl;
	}
	return 0;
}
