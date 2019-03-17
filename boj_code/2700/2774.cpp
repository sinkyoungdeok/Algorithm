#include <iostream>
using namespace std;
int main()
{
	int n = 0;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		char *num = new char[100];
		cin >> num;
		char *num_check = new char[100];
		int num_check_i = 0;
		int count = 0;
		for (int i = 0; num[i] != NULL; i++)
		{
			int check = 0;
			for (int j = 0; j < num_check_i; j++)
			{
				if (num[i] == num_check[j])
					check = 1;
			}
			if (check == 0)
			{
				num_check[num_check_i++] = num[i];
				count++;
				
			}
		}
		cout << count<< endl;
	}
	return 0;
}
