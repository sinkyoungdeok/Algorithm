#include <iostream>
#include <cstdio>
using namespace std;
int main()
{
	int n = 0;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		double a = 0;
		cin >> a;
		char b[5];
		cin >> b;
		if (b[0] == 'k' && b[1] == 'g')
		printf("%.4f lb\n", a*2.2046);
		else if (b[0] == 'l' && b[1] == 'b')
			printf("%.4f kg\n", a*0.4536);
		else if (b[0] == 'l' )
			printf("%.4f g\n", a*0.2642);
		else if (b[0] == 'g')
			printf("%.4f l\n", a*3.7854);


	}
	return 0;
}
