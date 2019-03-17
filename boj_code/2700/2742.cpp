#include <iostream>
using namespace std;
int main()
{
	int a = 0;
	cin >> a;
	if (a <= 100000)
	{
		for (; a > 0; a--)
			printf("%d\n", a);
	}
	//system("pause");
	return 0;
}
