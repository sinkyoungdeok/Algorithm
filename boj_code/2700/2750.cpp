#include <iostream>
using namespace std;
int main()
{
	int size = 0;
	cin >> size;
	int *num2 = new int[size];
	for (int i = 0; i<size; i++)
		cin >> num2[i];

	for (int i = 0; i<size; i++)
	{
		for (int j = 0; j<i; j++)
		{
			if (num2[i]<num2[j])
			{
				int swap = num2[i];
				num2[i] = num2[j];
				num2[j] = swap;
			}
		}
	}

	for (int i = 0; i<size; i++)
	{
		cout << num2[i] << endl;
	}

	return 0;
}
