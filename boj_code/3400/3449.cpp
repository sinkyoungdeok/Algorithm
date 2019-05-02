#include <iostream>
using namespace std;
int main()
{
	int n = 0;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		char *a = new char[101];
		char *b = new char[101];
		cin >> a >> b;
		int check = 0;
		for (int j = 0; a[j] != NULL; j++)
		{
			if (a[j] != b[j])
				check++;
		}
		cout << "Hamming distance is " << check << "." << endl;
	}


	return 0;
}
