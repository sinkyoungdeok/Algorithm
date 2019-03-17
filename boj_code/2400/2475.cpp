#include <iostream>
using namespace std;
int main()
{
	long long int n[5];
	long long int sum = 0;
	for (int i = 0; i < 5; i++)
	{
		cin >> n[i];
		sum = sum + (n[i] * n[i]);
	}
	cout << sum % 10 << endl;


	return 0;
}
//0~9 --> 48~57 
//a~z --> 97->122
//A~Z --> 65->90
