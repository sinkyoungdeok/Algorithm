#include <cstdio>
#include <cctype>
#include <iostream>
using namespace std;

int main() 
{
	int n = 0;
	cin >> n;
	int result = 0;
	cin >> result;
	
	int *num = new int[n];
	for (int i = 0; i < n; i++)
		cin >> num[i];
	int check = 0;
	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n; j++)
			if (num[i] + num[j] == result)
				check++;
	}
	cout << check << endl;
	return 0;
}
