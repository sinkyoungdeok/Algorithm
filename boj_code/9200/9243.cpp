#include <iostream>
using namespace std;
int main()
{
	int n = 0;
	cin >> n;

	char num1[1001];
	char num2[1001];
	cin >> num1 >> num2;
	if (n % 2 == 1)
	{
		for (int i = 0; num1[i] != NULL; i++)
			if (num1[i] == num2[i])
			{
				cout << "Deletion failed" << endl;
				return 0;
			}
		cout << "Deletion succeeded" << endl;
	}
	else
	{
		for (int i = 0; num1[i] != NULL; i++)
			if (num1[i] != num2[i])
			{
				cout << "Deletion failed" << endl;
				return 0;
			}
		cout << "Deletion succeeded" << endl;
	}

	return 0;
}
