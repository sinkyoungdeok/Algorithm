#include <cstdio>
#include <iostream>
#include <cstring>
using namespace std;
int main() 
{
	int n = 0;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin.ignore();
		char num[10001]; 
		cin.getline(num, 10001);
		char change[30];
		cin >> change;
		for (int i = 0; i < strlen(num); i++)
		{
			if (num[i] == ' ')
				cout << ' ';
			else 
			cout << change[num[i] -'A'];
		}
		cout << endl;
	}
	return 0;
}
