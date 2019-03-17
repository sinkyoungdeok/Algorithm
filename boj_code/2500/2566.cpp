#include <iostream>
using namespace std;
int main()
{
	int num[10][10];
	int max = 0;
	int maxi;
	int maxj;
	for ( int i =1 ;i <=9; i++)
		for (int j = 1; j <= 9; j++)
		{
			cin >> num[i][j];
			if (max < num[i][j])
			{
				max = num[i][j];
				maxi = i;
				maxj = j;
			}
		}
	cout << max << endl << maxi << " " << maxj << endl;
	return 0;
}
