#include <iostream>
using namespace std;
int main()
{
	int n = 0;
	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		int num = 0;
		cin >> i >> num;
		if (num < 7)
			cout << i << " " << num << " NO" << endl;
		else {
			int sosu = 0;
			for (int j = 2; j <= num / 2; j++)
			{
				if (num%j == 0)
				{
					cout << i << " " << num << " NO" << endl;
					sosu = 1;
					break;
				}
			}
			if (sosu == 1)
				continue;
			//소수이고 7이상일떄
			int dup_num = num;
			int check[10001] = { 0 };
			while (1)
			{
				if (check[dup_num] == 0)
					check[dup_num] = 1;
				else {
					cout << i << " " << num << " NO" << endl;
					break;
				}
				int sum = 0;
				while (dup_num) {
					sum += (dup_num % 10) * (dup_num % 10);
					dup_num /= 10;
				}
				dup_num = sum;

				if (dup_num == 1)
				{
					cout << i << " " << num << " YES" << endl;
					break;
				}
			}

		}
	}
	return 0;
}
