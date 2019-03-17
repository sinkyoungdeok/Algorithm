#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
	int a, b;
	cin >> a >> b;
	int check = 0;
	for (int i = 1; i <= a; i++)
	{
		if (a % i == 0)
		{
			check++;
			if (check == b)
			{
				cout << i << endl;
				break;
			}
			
		}
	}
	if (check < b)
		cout << "0" << endl;
	return 0;
}
