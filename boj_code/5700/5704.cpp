#include <iostream>
#include <string.h>
using namespace std;
int main()
{//97~122
	char *num = new char[201];
	cin.getline(num, 201);
	while (num[0] != '*')
	{
		int num_len = strlen(num);
		int number[150] = { 0 };
		int check = 0;
		for (int i = 0; i < num_len; i++)
		{
			number[(int)num[i]]++;
		}
		for (int i = 97; i <= 122; i++)
		{
			if (number[i] == 0)
				check = 1;
		}
		if (check == 1)
			cout << "N" << endl;
		else
			cout << "Y" << endl;
		cin.getline(num, 201);
	}
	return 0;
}
