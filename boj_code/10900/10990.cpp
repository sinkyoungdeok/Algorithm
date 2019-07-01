#include <iostream>
using namespace std;
int main()
{
	int n = 0;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		for (int j = n-i-1; j > 0; j--)
			cout << " ";
		cout << "*";
		for (int j = i*2-1; j > 0; j--)
			cout << " ";
		if(i!=0)cout << "*";
		cout << endl;
	}


	return 0;
}
