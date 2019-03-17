#include <iostream>
using namespace std;
int main()
{
	int n = 0;
	cin >> n;
	int jumsu = 0;
	int sum = 0;
	for (int i = 0; i < n; i++)
	{
		int num = 0;
		cin >> num;
		if (num == 1)
		{
			jumsu++;
			sum = sum + jumsu;
		}
		else
		{
			jumsu = 0;
		}



	}
	cout << sum << endl;
	return 0;
}
