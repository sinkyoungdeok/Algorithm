#include <iostream>
using namespace std;
int main()
{
	int a = 0;
	cin >> a;
	if (a <= 100000)
	{
		for (int i=0; i<a; i++)
			printf("%d\n", i+1);
	}
	//system("pause");
	return 0;
}
