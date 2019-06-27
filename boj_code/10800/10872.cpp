#include <iostream>
using namespace std;
int main()
{
	int num1;
	cin >> num1;
	int sum = 1;
	for (int i = 1; i <= num1; i++)
	{
		sum = sum * i;
	}
	cout << sum << endl;
	


	return 0;
}
