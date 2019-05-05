#include <iostream>
#include <algorithm>
#include <string.h>
using namespace std;
int main()
{
	char num1[1001];
	char num2[1001];
	cin >> num1 >> num2;
	int i = 1;
	while (1)
	{
		if (num1[0] == 'E' && num1[1] == 'N' && num1[2] == 'D')
			break;

		cout << "Case " << i++ << ":";
		int num1_len = strlen(num1);
		int num2_len = strlen(num2);
		int check = 0;
		if (num1_len != num2_len)
		{
			cout <<" different" << endl;
			cin >> num1 >> num2;
			continue;
		}
		sort(num1, num1 + num1_len);
		sort(num2, num2 + num2_len);
		for (int j = 0; num1[j] != NULL; j++)
		{
			if (num1[j] != num2[j])
			{
				cout << " different" << endl;
				cin >> num1 >> num2;
				check = 1;
				break;
			}
		}
		if (check == 1)
			continue;

		cout << " same" << endl;
		cin >> num1 >> num2;
	}
	return 0;
}
