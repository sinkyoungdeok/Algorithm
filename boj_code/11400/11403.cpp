#include <iostream>
using namespace std;
int main()
{
	int N;
	cin >> N;
	
	int **G = new int*[N];
	
	for (int i = 0; i < N; i++)
	{
		G[i] = new int[N];
		for (int j = 0; j < N; j++)
			cin >> G[i][j];
	}

	for (int k = 0; k < N; k++)
		for(int i=0; i<N;i++)
			for (int j = 0; j < N; j++)
			{
				if (G[i][k] && G[k][j])
					G[i][j] = 1;
			}

	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N; j++)
			cout << G[i][j] << " ";
		cout << endl;
	}
	return 0;
}
