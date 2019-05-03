#include <iostream>
#include <stack>
#include <string.h>
using namespace std;
int main()
{
	int n = 0;
	cin >> n;
	cin.ignore();
	stack<char> s;
	for (int i = 0; i < n; i++)
	{
		char *num = new char[1001];
		cin.getline(num, 1001);
		for (int j = 0; j < strlen(num); j++)
		{
			if (num[j] == ' ')
			{
				while (s.empty() != 1) {
					cout << s.top();
					s.pop();
				}
				cout << " ";
			}
			else
			{
				s.push(num[j]);
			}
			
		}
		while (s.empty() != 1) {
			cout << s.top();
			s.pop();
		}
		cout << endl;
	}


	return 0;
}
