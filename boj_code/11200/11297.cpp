#include <iostream>
#include <cstring>
using namespace std;
int main()
{
	while (1)
	{
		int a, b, c;
		cin >> a >> b >> c;
		cin.ignore();
		if (a == 0 && b == 0 && c == 0)
			break;
		a += b + c;
		a %= 25;
		a++;
		char num[251];
		cin.getline(num, 251);
		for (int i = 0; i < strlen(num); i++)
		{
			if ('a' <= num[i] && num[i] <= 'z')
			{
				num[i] -= a;
				if (num[i] < 'a') num[i] += 26;
			}
			
			cout << num[i];
		}
		cout << endl;

	}
	return 0;
}
