#include <iostream>
using namespace std;
int main()
{
	int test = 0;
	cin >> test;
	cin.ignore();
	for (int i = 0; i < test; i++)
	{
		char *num = new char[100];
		cin.getline(num, 100);
		cout << i + 1 << ". " << num << endl;

	}
	return 0;
}
