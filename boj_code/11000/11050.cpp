#include <iostream>
using namespace std;
int main()
{
	int num1; int num2;
	cin >> num1 >> num2;
	int sum = 1;
	for (int i = 0; i < num2; i++)
	{
		sum = sum * num1;
		num1--;
	}
	while (num2 != 0)
	{
		sum = sum / num2;
		num2--;
	}
	cout << sum << endl;


	return 0;
}
