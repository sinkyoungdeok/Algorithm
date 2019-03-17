#include <iostream>
using namespace std;
int main()
{
	int n, m;
	cin >> n >> m;
	for (int i = 0; i < 5; i++)
	{
		int num = 0;
		cin >> num;
		cout << num - n * m << endl;
	}
	return 0;
}
