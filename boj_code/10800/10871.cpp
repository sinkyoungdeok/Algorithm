#include <iostream>
using namespace std;
int main()
{
	int num = 0;
	int max = 0;
	cin >> num >> max;
	int n = 0;
	for (int i = 0; i < num; i++)
	{
		cin >> n;
			if (n < max)
				cout << n << " ";
			
	}
	cout << endl;
	//system("pause");
	return 0;
}
