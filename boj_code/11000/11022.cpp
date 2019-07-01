#include <iostream>
using namespace std;
int main()
{
	int num = 0;
	cin >> num;
	
	int n, m;
	for ( int i =0 ;i<num; i++)
	{
		cin >> n >> m;
		cout << "Case #" << i + 1 << ": ";
		cout << n << " + " << m << " = " << n + m << endl;
	}


	return 0;
}
