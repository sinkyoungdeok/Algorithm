#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
	int *num = new int[3];
	cin >> num[0] >> num[1] >> num[2];
	while (num[0] != 0 && num[1] != 0 && num[2] != 0) {
		sort(num, num + 3);
		if (num[0] * num[0] + num[1] * num[1] == num[2] * num[2])
			cout << "right" << endl;
		else
			cout << "wrong" << endl;


		cin >> num[0] >> num[1] >> num[2];
	}


	return 0;
}
