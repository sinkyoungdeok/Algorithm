#include <iostream>
using namespace std;
int main() 
{
	int n = 0;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		int a, b;
		cin >> a >> b;
		int *num = new int[b + 1];
		int check = 0;
		for (int j = 0; j < a; j++)
		{
			int c;
			cin >> c;
			if (num[c] != 1)
				num[c] = 1;
			else
				check++;


		}
		cout << check << endl;

	}


	return 0;
}
