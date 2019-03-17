#include <iostream>
#include <string.h>
using namespace std;
int main()
{
	int person = 0;
	int max = 0;
	for (int i = 0; i < 10; i++)
	{
		int a, b;
		cin >> a >> b;
		person += b;
		person -= a;

		if (max < person)
			max = person;



	}
	cout << max << endl;
	return 0;
}
