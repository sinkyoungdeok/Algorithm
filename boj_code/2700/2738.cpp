#include <iostream>
using namespace std;
int main()
{
	int n = 0;
	int m = 0;
	cin >> n >> m;
	int **num1 = new int*[n];
	int **num2 = new int*[n];
	for (int i = 0; i < n; i++)
	{
		num1[i] = new int[m];
		num2[i] = new int[m];
	}

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			cin >> num1[i][j];
		}
	}
	
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			cin >> num2[i][j];
			num1[i][j] += num2[i][j];
		}
	}
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			cout << num1[i][j] << " ";
		}
		cout << endl;
	}



	return 0;
}
