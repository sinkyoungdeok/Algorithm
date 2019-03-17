#include <iostream>
#include <cstring>
using namespace std;
bool num[1000001];
int main()
{
	for (int i = 2; i*i <= 1000000; i++)
	{
		if (num[i] == false)
		{
			num[i] = false;

			for (int j = i * 2; j <= 1000000; j += i)
				num[j] = true;
		}
	}
	num[0] = num[1] = true;
	int a, b;
	cin >> a >> b;
	for (int i = a; i <= b; i++)
		if (num[i] == false)
			cout << i << '\n';
	return 0;
}
