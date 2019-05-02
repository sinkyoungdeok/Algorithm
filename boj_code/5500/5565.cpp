#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int *num = new int[10];
	for (int i = 0; i < 10; i++)
		cin >> num[i];
	for (int i = 1; i < 10; i++)
		num[0] -= num[i];
	cout << num[0] << endl;
	return 0;
}
