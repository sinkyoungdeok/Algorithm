#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
	int *num = new int[8];
	int *num2 = new int[8];
	for (int i = 0; i < 8; i++)
	{
		cin >> num[i];
		num2[i] = num[i];
	}
	sort(num2,num2+8);
	cout <<num2[3]+ num2[4] + num2[5] + num2[6] + num2[7] << endl;
	for (int i = 0; i < 8; i++)
		if (num[i] == num2[3] || num[i] == num2[4] || num[i] == num2[5] || num[i] == num2[6] || num[i] == num2[7])
			cout << i + 1 << " ";
	cout << endl;
	return 0;
}
