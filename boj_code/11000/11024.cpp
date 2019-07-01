#include <iostream>
#include <cstring>
using namespace std;
int main()
{
	int n = 0;
	cin >> n;
	cin.ignore();
	char num[100001]; 
	for (int i = 0; i < n; i++)
	{
		cin.getline(num, 100001);
		long long int sum = 0;
		int num_len = strlen(num);
		int mid_sum = 0;
		for (int i = 0; i < num_len; i++)
		{
			if (num[i] != ' ')
			{
				mid_sum *= 10;
				mid_sum += num[i] - '0';
			}
			else
			{
				sum += mid_sum;
				mid_sum = 0;
			}
		}
		sum += mid_sum;

		cout << sum << endl;
	}
	return 0;
}
