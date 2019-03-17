#include <iostream>
using namespace std;
int main()
{
	int a = 0;
	cin >> a;
	if (1 <= a && a <= 100)
	{
		for (int i = 0; i < a; i++)
		{
			for (int j = 0; j < i; j++)
			{
				cout << " ";
			}
			for (int j = a; j > i; j--)
			{
				cout << "*";
			}
			
			cout << endl;
		}

	}


	//system("pause");
	return 0;
}
