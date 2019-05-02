#include <iostream>
#include <cstring>
using namespace std;
int main()
{
	char num[1000];
	while (cin.getline(num, 1000))
	{
		if (num[0] == '#')
			return 0;
		int num_len = strlen(num);
		for (int i = 0; i < num_len; i++)
		{
			if (num[i] ==' ')
				cout << "%20";
			else if (num[i] == '!')
				cout << "%21";
			else if (num[i] == '$')
				cout << "%24";
			else if (num[i] == '%')
				cout << "%25";
			else if (num[i] == '(')
				cout << "%28";
			else if (num[i] == ')')
				cout << "%29";
			else if (num[i] == '*')
				cout << "%2a";
			else
				cout << num[i];

		}


		cout << endl;
	}
	return 0;
}
