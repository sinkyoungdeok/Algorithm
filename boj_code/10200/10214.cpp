#include <iostream>
#include <string.h>
using namespace std;
int main()
{
	int n = 0;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		int num1;
		int num2;
		int sum1=0;
		int sum2=0;
		for (int j = 0; j < 9; j++)
		{
			cin >> num1 >> num2;
			sum1 += num1;
			sum2 += num2;
		}
		if (sum1 > sum2)
			cout << "Yonsei" << endl;
		else if (sum1 < sum2)
			cout << "Korea" << endl;
		else
			cout << "Draw" << endl;
	}

	return 0;
}
