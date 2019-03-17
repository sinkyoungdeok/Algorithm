#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
	string Grd1, Grd2;
	int Num1, Num2;
	cin >> Grd1 >> Grd2;
	reverse(Grd1.begin(), Grd1.end());
	reverse(Grd2.begin(), Grd2.end());

	Num1 = stoi(Grd1);
	Num2 = stoi(Grd2);

	if (Num1 >= Num2)
	{
		cout << Num1;
	}
	else
	{
		cout << Num2;
	}
}
