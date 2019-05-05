#include <iostream>
using namespace std;
int main()
{	
	int *num = new int[5];
	int sum = 0;
	for (int i = 0; i < 5; i++)
	{
		cin >> num[i];
		if (num[i] < 40)
			num[i] = 40;
		sum += num[i];
	}
	cout << sum / 5 << endl;
	

	return 0;
}
