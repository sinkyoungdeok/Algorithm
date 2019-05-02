#include <iostream>
using namespace std;
int main()
{
	int a = 0;
	cin >> a;
	
	for (int i = 0; i < a; i++)
	{
		int sum = 1950 + 65;
		char* num = new char[1001];
		int num_ch[100] = { 0, };
		cin >> num;

		for (int i = 0; num[i] != NULL; i++)
		{
			if (num_ch[(int)num[i]] ==0)
			{
				num_ch[(int)num[i] ] = 1;
				sum -= ((int)num[i] );
			}
		}
		cout << sum << endl;
	}


	return 0;
}
