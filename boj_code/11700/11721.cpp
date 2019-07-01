#include <iostream>
using namespace std;
int main()
{
	char *a = new char[100];
	cin >> a;
	
	for (int i = 0; i < 100; i++)
	{
		if (a[i] == NULL)
			break;
		if (i!=0 && i % 10 == 0)
			cout << endl;
		cout << a[i];

	}
	cout << endl;


	//system("pause");
	return 0;
}
