#include <iostream>
using namespace std;
int main()
{
	int *a = new int[3];
	cin >> a[0] >> a[1] >> a[2];
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < i; j++)
		{
			if (a[i] > a[j])
			{
				int swap = a[i];
				a[i] = a[j];
				a[j] = swap;
			}
		}
	}
	cout << a[1] << endl;

	delete[] a;
	//system("pause");
	return 0;
}
