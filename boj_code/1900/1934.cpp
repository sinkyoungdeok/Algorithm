#include <iostream>
using namespace std;
int main()
{
	int n = 0;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		int num1; int num2;
		cin >> num1 >> num2;
		int *pnum1 = new int[num1];
		int *pnum2 = new int[num2];
		int pnum1check = 0;
		int pnum2check = 0;
		for (int i = 1; i <= num1; i++)
		{
			if (num1 % i == 0)
			{
				pnum1[pnum1check] = i;
				pnum1check++;
			}
		}
		for (int i = 1; i <= num2; i++)
			if (num2%i == 0)
			{
				pnum2[pnum2check] = i;
				pnum2check++;
			}
		int same = 1;
		for (int i = 0; i < pnum1check; i++)
		{
				for (int j = 0; j < pnum2check; j++)
				{
					if (pnum1[i] == pnum2[j])
						same = pnum1[i];
				}
		}
		cout << num1*num2/same << endl;

		delete[]pnum1;
		delete[]pnum2;

	}

	return 0;
}
