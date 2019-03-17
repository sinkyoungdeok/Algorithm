#include <cstdio>
#include <iostream>
using namespace std;
int main() {
	int n = 0;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		int num = 0;
		cin >> num;

		for (int i = 2; i <= num; i++)
		{
			int check = 0;
			while (num%i == 0) {
				num /= i;
				check++;
			}
			if (check > 0)
			{
				cout << i << " " << check << endl;
			}
		}
	}
	



	return 0;
}
