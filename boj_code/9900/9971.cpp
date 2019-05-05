#include <iostream>
#include <string>
#include <algorithm>
#include <cstdio>
#include <iomanip>
using namespace std;
int main() 
{
	while (1)
	{
		string num;
		cin >> num;
		if (num == "ENDOFINPUT")
			break;
		
		string input;
		string end;
		cin.ignore();
		getline(cin, input);
		cin >> end;

		for (int i = 0; i < input.length(); i++)
		{
			if (65 <= input[i] && input[i] <= 90)
				cout << (char)((input[i] - 'A' + 21) % 26 + 'A');
			else
				cout << input[i];
		}
		cout << endl;


	}
	return 0;
}
