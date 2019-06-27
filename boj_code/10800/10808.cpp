#include <iostream>
#include <algorithm>
using namespace std;
int main()//97~122
{
	int ascii[150] = { 0, };
	char*alpha = new char[101];
	cin >> alpha;
	for (int i = 0; alpha[i] != NULL; i++)
	{
		ascii[(int)alpha[i]]++;
	}
	for (int i = 97; i <= 122; i++)
		cout << ascii[i] << " ";
	cout << endl;



	delete[] alpha;
	return 0;
}
