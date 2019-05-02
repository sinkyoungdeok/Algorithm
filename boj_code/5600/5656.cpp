#include <iostream>
#include <string.h>
using namespace std;
int main()
{
	int a, b;
	char oper[3];
	cin >> a >> oper >> b;
	int i = 1;
	while (1)
	{
		if (oper[0] == 'E')
			break;
		cout << "Case " << i++ << ": ";
		if (oper[0] == '!' && oper[1] == '=')
			if (a != b)
				cout << "true" << endl;
			else
				cout << "false" << endl;
		else if (oper[0] == '>')
			if (oper[1] == '=')
				if (a >= b)
					cout << "true" << endl;
				else
					cout << "false" << endl;
			else
				if (a > b)
					cout << "true" << endl;
				else
					cout << "false" << endl;
		else if (oper[0] == '<')
			if (oper[1] == '=')
				if (a <= b)
					cout << "true" << endl;
				else
					cout << "false" << endl;
			else
				if (a < b)
					cout << "true" << endl;
				else
					cout << "false" << endl;
		else if (oper[0] == '=' && oper[1] == '=')
			if (a == b)
				cout << "true" << endl;
			else
				cout << "false" << endl;

		cin >> a >> oper >> b;
	}
	return 0;
}
