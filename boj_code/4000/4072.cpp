#include <iostream>
#include <string>
#include <queue>
#include <algorithm>
using namespace std;
int main()
{
	while (1)
	{
		string input;
		getline(cin, input);
		if (input[0] == '#')
			break;
		else {
			string temp;
			for (int i = 0; i < input.length(); i++)
			{
				if (input[i] != ' ')
				{
					temp += input[i];
				}
				else
				{
					reverse(temp.begin(), temp.end());
					cout << temp << " ";
					temp = "\0";
				}
			}
			reverse(temp.begin(), temp.end());
			cout << temp;
			cout << endl;

		}


	}


	return 0;
}
