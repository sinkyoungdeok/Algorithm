#include <iostream>
#include <queue>
using namespace std;
long long C[2][2];
void cal(long long A[2][2], long long B[2][2])
{
	for(int i=0; i< 2;i++)
		for (int j =0; j < 2; j++)
		{
			C[i][j] = 0;
			for (int k = 0; k < 2; k++)
				C[i][j] += A[i][k] * B[k][j];
			C[i][j] %= 1000000007LL;
		}
	for (int i = 0; i < 2; i++)
		for (int j = 0; j < 2; j++)
			A[i][j] = C[i][j];
}

int main()
{
	long long N;
	cin >> N;

	if (N <= 1)
	{
		cout << N << '\n';
		return 0;
	}

	long long tmp[2][2] = { {1,0},{0,1} };
	long long mat[2][2] = { {1,1},{1,0} };

	while (N > 0)
	{
		if (N % 2 == 1)
			cal(tmp, mat);
		cal(mat, mat);
		N /= 2;
	}
	cout << tmp[0][1] << '\n';


	return 0;
}
