#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
	int n;
	cin >> n;
	for (int i = 1; i <n; i++)
	{
		for (int j = n - i; j > 0; j--)
			cout << " ";
		cout << "*";
		for (int j = (i - 2) * 2 + 1; j > 0; j--)
			cout << " ";
		if(i!=1)
		cout << "*";
		
		cout << endl;
	}
	for (int i = n * 2 - 1; i > 0; i--)
		cout << "*";
		cout << endl;

	return 0;
}
