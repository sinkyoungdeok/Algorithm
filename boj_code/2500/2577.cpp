#include <iostream>
#include <string>
using namespace std;
int main()
{
	int a, b, c = 0;
	int aster = 0;
	int *check = new int[10];
	int unit = 0;
	for (int i = 0; i < 10; i++)
		check[i] = 0;
	cin >> a >> b >> c;
	aster = a*b*c;
	
	while (aster != 0) 
	{
		unit = aster % 10;
		check[unit]++;
		aster /= 10;
	} 
	
	for (int i = 0; i < 10; i++)
	{
		cout << check[i] << endl;
	}
	
	
	return 0;
}
