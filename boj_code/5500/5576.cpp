#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
	int *num = new int[10];
	int *num2 = new int[10];

	for (int i = 0; i < 10; i++)
		cin >> num[i];
	for (int i = 0; i < 10; i++)
		cin >> num2[i];
	sort(num, num + 10);
	sort(num2, num2 + 10);
	cout << num[7] + num[8] + num[9] << " " << num2[7] + num2[8] + num2[9] << endl;

	return 0;
}
