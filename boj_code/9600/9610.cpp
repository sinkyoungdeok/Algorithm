#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
	int n = 0;
	cin >> n;
	int Q1 = 0;
	int Q2 = 0;
	int Q3 = 0;
	int Q4 = 0;
	int AXIS = 0;
	for (int i = 0; i < n; i++)
	{
		int n1; int n2;
		cin >> n1 >> n2;
		if (n1 == 0 || n2 == 0)
			AXIS++;
		else if (n1 > 0 && n2 > 0)
			Q1++;
		else if (n1 > 0 && n2 < 0)
			Q4++;
		else if (n1 < 0 && n2 >0)
			Q2++;
		else
			Q3++;
		
	}
	cout << "Q1: " << Q1 << endl;
	cout << "Q2: " << Q2 << endl;
	cout << "Q3: " << Q3 << endl;
	cout << "Q4: " << Q4 << endl;
	cout << "AXIS: " << AXIS << endl;
	return 0;
}
