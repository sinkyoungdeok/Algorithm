#include <iostream>
using namespace std;
int main()
{
	int n = 0;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		int a, b;
		cin >> a >> b;
		int check = 0;
		for (int j = 0; j < a; j++)
		{
			double x, y, z;
			cin >> x >> y >> z;
			if (x*y / z >= b) check++;



		}
		cout << check << endl;


	}

	return 0;
}
