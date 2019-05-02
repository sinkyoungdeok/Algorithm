#include <iostream>
using namespace std;
int main()
{
	int a, b;
	while (cin >> a >> b) {
		int check = 0;
		for (int i = a; i <= b; i++)
		{
			int num[10] = { 0 };
			int check_ch = 0;
			int j = i;
			while (j)
			{
				if (num[j % 10] == 0)
					num[j % 10]++;
				else
				{
					check_ch = 1;
					break;
				}
				j /= 10;
			}
			if (check_ch == 0)
				check++;


		}
		cout << check << endl;
	}

	return 0;
}
