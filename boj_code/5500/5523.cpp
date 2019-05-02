#include <iostream>
using namespace std;
int main()
{
	int n = 0;
	cin >> n;
	int acount = 0;
	int bcount = 0;
	for (int i = 0; i < n; i++)
	{
		int a, b;
		
		cin >> a >> b;
		if (a > b)
			acount++;
		else if (a < b)
			bcount++;
		
		

	}
	cout << acount << " " << bcount << endl;

	return 0;
}
