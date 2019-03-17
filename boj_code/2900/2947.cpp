#include <iostream>
using namespace std;
int main()
{
	int num[5] = { 0 };
	for (int i = 0; i < 5; i++)
		cin >> num[i];
	for (int i = 0; i < 4; i++)
	{
		if (num[i] > num[i + 1])
		{
			int temp = num[i];
			num[i] = num[i + 1];
			num[i + 1] = temp;
			for (int j = 0; j < 5; j++)
				cout << num[j] << " ";
			cout << endl;
		}
		if (i == 3)
		{
			if (!(num[0] == 1 && num[1] == 2 && num[2] == 3 && num[3] == 4 && num[4] == 5))
			{
				i = -1;
				continue;
			}

		}


	}



	return 0;
}
