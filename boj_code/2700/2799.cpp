#include <iostream>
#include <string>
#include <queue>
#include <functional>
#include <cstdlib>
#include <map>
using namespace std;
int main()
{
	int N, M;
	cin >> N >> M;
	string *num = new string[1 + N * 5];
	for (int i = 0; i < 1 + N * 5; i++)
		cin >> num[i];

	int w1 = 0;
	int w2 = 0;
	int w3 = 0;
	int w4 = 0;
	int w5 = 0;

	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < M; j++)
		{
			if (num[1 + i * 5][1 + j * 5] == '.' && num[1 + i * 5][2 + j * 5] == '.' && num[1 + i * 5][3 + j * 5] == '.' && num[1 + i * 5][4 + j * 5] == '.')
				w1++;
			else if (num[2 + i * 5][1 + j * 5] == '.' && num[2 + i * 5][2 + j * 5] == '.' && num[2 + i * 5][3 + j * 5] == '.' && num[2 + i * 5][4 + j * 5] == '.')
				w2++;
			else if (num[3 + i * 5][1 + j * 5] == '.' && num[3 + i * 5][2 + j * 5] == '.' && num[3 + i * 5][3 + j * 5] == '.' && num[3 + i * 5][4 + j * 5] == '.')
				w3++;
			else if (num[4 + i * 5][1 + j * 5] == '.' && num[4 + i * 5][2 + j * 5] == '.' && num[4 + i * 5][3 + j * 5] == '.' && num[4 + i * 5][4 + j * 5] == '.')
				w4++;
			else
				w5++;
		}


	}
	cout << w1 << " " << w2 << " " << w3 << " " << w4 << " " <<w5 << endl;




	return 0;
}
