#include <iostream>
using namespace std;
int main()
{
	int n = 0;
	cin >> n;
	int **score = new int*[n];
	for (int i = 0; i < n; i++)
		score[i] = new int[10];
	for (int i = 0 ; i< n ; i++)
	{
		int check = 0;
		for (int j = 0; j < 10; j++)
		{
			cin >> score[i][j];
			if (j % 5 + 1 != score[i][j])
				check = 1;
		}
		if (check == 0)
			cout << i + 1 << endl;
	}
	return 0;
}
