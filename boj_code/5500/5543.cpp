#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
	int n1, n2, n3;
	cin >> n1 >> n2 >> n3;
	int minha = min(n1, n2);
	minha = min(minha, n3);
	int n4, n5;
	cin >> n4 >> n5;
	int mincol = min(n4, n5);
	cout << minha + mincol - 50 << endl;
	return 0;
}
