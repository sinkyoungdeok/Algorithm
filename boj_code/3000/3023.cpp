#include <iostream>
#include <string>
#include <queue>
#include <functional>
#include <cstdlib>
#include <map>
using namespace std;
int main()
{
	int R, C;
	cin >> R >> C;

	char **num = new char*[R*2];
	for (int i = 0; i < R*2; i++)
		num[i] = new char[C*2];

	for (int i = 0; i < R; i++)
		for (int j = 0; j < C; j++)
		{
			cin >> num[i][j];

			num[i][C*2 - j - 1] = num[i][j];
			num[R*2 - 1 - i][j] = num[i][j];
			num[R*2 - 1 - i][C*2 - j - 1] = num[i][j];

		}
	int A, B;
	cin >> A >> B;
	if (num[A - 1][B - 1] == '.')
		num[A - 1][B - 1] = '#';
	else
		num[A - 1][B - 1] = '.';


	for (int i = 0; i < R*2; i++)
	{
		for (int j = 0; j < C*2; j++)
			cout << num[i][j];
		cout << endl;
	}
	return 0;
}
