#include <iostream>
using namespace std;
int main()
{
	int n = 0;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		int n, k;
		cin >> n >> k;
		int check = 0;
		int num = 0;
		for (int j = 0; j < n; j++)
		{
			cin >> num;
			while (num-k >=0 )
			{
				check++;
				num -= k;
			}
		}
		cout << check << endl;
		
	}
	return 0;
}
