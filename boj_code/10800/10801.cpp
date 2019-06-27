#include <iostream>
using namespace std;
int main()
{
	int checkA = 0;
	int checkB = 0;
	int *numA = new int[10];
	int *numB = new int[10];
	for (int i = 0; i < 10; i++)
	{
		cin >> numA[i];
	}
	for (int i = 0; i < 10; i++)
	{
		cin >> numB[i];
	}
	for (int i = 0; i < 10; i++)
	{
		if (numA[i] > numB[i])
			checkA++;
		else if (numA[i] < numB[i])
			checkB++;
	}

	if (checkA == checkB)
		cout << "D" << endl;
	else if (checkA > checkB)
		cout << "A" << endl;
	else
		cout << "B" << endl;
	return 0;
}
