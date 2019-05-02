#include <iostream>
using namespace std;
int main() 
{
	int n = 0;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		int a = 0;
		cin >> a;
		
		cout << "Pairs for " << a-- << ": ";
		for (int j = 1; j < a; j++)
		{
			if (j != 1)
				cout << ", ";
			cout << j << " " << a-- ;
		}
		cout << endl;

	}



	return 0;
}
