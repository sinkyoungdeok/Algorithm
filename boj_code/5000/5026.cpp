#include <iostream>
using namespace std;
int main() 
{
	int n = 0;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		char *num = new char[50];
		cin >> num;
		if (num[0] == 'P' && num[1] == '=' && num[2] == 'N' && num[3] == 'P')
			cout << "skipped" << endl;
		else
		{
			int a = 0;
			int b = 0;
			int pluscheck = 0;
			for (int j = 0; num[j] != NULL; j++)
			{
				if (num[j] == '+')
				{
					pluscheck++;
					continue;
				}
				if (!pluscheck)
				{
					a *= 10;
					a += num[j]-'0';
				}
				else {
					b *= 10;
					b += num[j]-'0';
				}
			}
			cout << a + b << endl;
		}
		

	}
	return 0;
}
