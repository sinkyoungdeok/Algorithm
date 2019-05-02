#include <iostream>
#include <stack>
#include <cstring>
#include <algorithm>
using namespace std;
int checkx[1001];
int checky[1001];
int main()
{
	int x, y, x1, y1, x2, y2;
	cin >> x >> y >> x1 >> y1 >> x2 >> y2;

	checkx[x]++;
	checkx[x1]++;
	checkx[x2]++;

	checky[y]++;
	checky[y1]++;
	checky[y2]++;

	for (int i = 0; i < 1001; i++)
		if (checkx[i] == 1)
			cout << i << " ";
	for (int i = 0; i < 1001; i++)
		if (checky[i] == 1)
			cout << i << " ";
	cout << endl;
	return 0;
}
