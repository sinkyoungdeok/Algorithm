#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
	int *num = new int[9];
	for (int i = 0; i < 9; i++)
		cin >> num[i];
	int max = num[0];
	int check = 0;
	for (int i = 1; i < 9; i++)
	{
		if (max < num[i])
		{
			max = num[i];
			check = i;
		}
	}
	cout << max << endl << check+1 << endl;

}
