#include <iostream>
using namespace std;
int main()
{	
	int num = 0;
	cin >> num;
	if (1 <= num && num<= 1000)
	{
		for (int i = 0; i < num; i++)
		{
			int num2 = 0;
			cin >> num2;
			char *a = new char[20];
			cin >> a;
			for (int i = 0; a[i] != 0; i++)
			{
				for (int j = 0; j < num2; j++)
					cout << a[i];
			}
			cout << endl;

			delete[]a;
		}
	}
	return 0;
}
