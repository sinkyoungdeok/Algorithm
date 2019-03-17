#include <iostream>
#include <cstring>
using namespace std;
int main()
{
	char num1[101], num2[101];
	char oper;
	cin >> num1 >> oper >> num2;
	int num1len = strlen(num1);
	int num2len = strlen(num2);
	if (oper == '*')
	{
		cout << "1";

		for (int i = 0; i < num1len - 1 + num2len - 1; i++)
		{
			cout << "0";
		}
	}
	else {
		if(num1len > num2len)
		{
			num1[num1len - num2len] = num2[0];
			cout << num1 << endl;
		}
		else if(num1len < num2len)
		{ 
			num2[num2len - num1len] = num1[0];
			cout << num2 << endl;
		}
		else
		{
			num1[0] = '2';
			cout << num1 << endl;
		}
		
	}

	return 0;
}
