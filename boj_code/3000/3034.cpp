#include <iostream>
#include <math.h>
using namespace std;
int main()
{
	//float c = sqrt(30);
	//cout << c << endl;

	int a, b, c;
	cin >> a >> b >> c;
	float size = sqrt(b*b + c * c);
	for (int i = 0; i < a; i++)
	{
		int check = 0;
		cin >> check;
		if (size >= check)
			cout << "DA" << endl;
		else
			cout << "NE" << endl;
	}

	return 0;
}
