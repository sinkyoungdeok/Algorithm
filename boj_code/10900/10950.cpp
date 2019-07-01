#include <iostream>
using namespace std;
int main()
{
	int n = 0;
	cin >> n;
	int *num1 = new int[n];
	int *num2 = new int[n];
	for (int i = 0; i < n; i++)
	{
		cin >> num1[i] >> num2[i];
		cout << num1[i] + num2[i] << endl;

	}


	return 0;
}
