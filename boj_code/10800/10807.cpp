#include <iostream>
using namespace std;
int main()
{
	int n = 0;
	cin >> n;
	int *num = new int[n];
	for (int i = 0; i < n; i++)
	{
		cin >> num[i];
	}
	int search = 0;
	cin >> search;
	int check = 0;
	for (int i = 0; i < n; i++)
	{
		if (num[i] == search)
			check++;
	}
	cout << check << endl;
	return 0;
}
