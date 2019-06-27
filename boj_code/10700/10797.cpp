#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
	int a = 0;
	int n[5];
	cin >> a;
	int check = 0;
	for (int i = 0; i < 5; i++)
	{
		cin >> n[i];
		if (n[i] == a)
			check++;
	}
	
	cout << check << endl;

	return 0;
}
