#include <iostream>
using namespace std;
int main()
{
	int num = 0;
	cin >> num;
	int fivedi = num / 5;
	int threedi = 0;
	int check = 0;
	for (int i = fivedi; i >= 0; i--)
		if ((num - (i * 5)) % 3 == 0)
		{
			threedi = (num - (i * 5)) / 3;
			check++;
			fivedi = i;
			break;
		}

	if (check == 0)
		cout << "-1" << endl;
	else
		cout << fivedi + threedi << endl;
	
	return 0;
}
