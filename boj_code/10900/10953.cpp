#include <iostream>
using namespace std;
int main()
{
	int num = 0;
	cin >> num;
	
	char a[5];
	for ( int i =0 ;i<num; i++)
	{
		cin >> a;
		cout << (a[0] - '0') + (a[2] - '0') << endl;
	}


	return 0;
}
