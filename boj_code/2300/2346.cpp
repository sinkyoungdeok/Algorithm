#include <iostream>
using namespace std;
int main()
{
	int n = 0;
	cin >> n; 
	int *num = new int[n+1];
	for (int i = 1; i <= n; i++)
		cin >> num[i];
	int present = 1;
	for (int i = 1; i <= n; i++)
	{
		cout << present << " ";
		int dup = num[present];
		num[present] = 0;
		int check = 0;
		for (int j = 1; j <= n; j++)
		{
			if (num[j] == 0)
				check++;
		}
		if (check == n)
		{
			cout << endl;
			return 0;
		}
		if (dup > 0)
		{
			for (int i = 0; i < dup; i++)
			{
				present++;
				if (present == n + 1)
					present = 1;
				if (num[present] == 0)
				{
					i--;
				}
			}
		}
		else if (dup < 0)
		{
			dup = -dup;
			for (int i = 0; i < dup; i++)
			{
				present--;
				if (present == 0)
					present = n;
				if (num[present] == 0)
					i--;
			}
		}
	}




	return 0;
}
