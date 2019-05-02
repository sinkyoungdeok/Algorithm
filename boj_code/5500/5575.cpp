#include <iostream>
#include <string>
using namespace std;
int main()
{
	int Ah, Am, As;
	int Bh, Bm, Bs;
	int Ch, Cm, Cs;
	int Ah2, Am2, As2;
	int Bh2, Bm2, Bs2;
	int Ch2, Cm2, Cs2;
	cin >> Ah >> Am >> As;
	cin >> Ah2 >> Am2 >> As2;
	cin >> Bh >> Bm >> Bs;
	cin >> Bh2 >> Bm2 >> Bs2;
	cin >> Ch >> Cm >> Cs;
	cin >> Ch2 >> Cm2 >> Cs2;
	
	int AT, BT, CT;
	int AT2, BT2, CT2;

	AT = Ah * 3600 + Am * 60 + As;
	AT2 = Ah2 * 3600 + Am2 * 60 + As2;
	BT = Bh * 3600 + Bm * 60 + Bs;
	BT2 = Bh2 * 3600 + Bm2 * 60 + Bs2;
	CT = Ch * 3600 + Cm * 60 + Cs;
	CT2 = Ch2 * 3600 + Cm2 * 60 + Cs2;

	AT2 -= AT;
	BT2 -= BT;
	CT2 -= CT;

	cout << AT2 / 3600 << " ";
	AT2 %= 3600; 
	cout << AT2 / 60 << " ";
	AT2 %= 60;
	cout << AT2 << endl;

	cout << BT2 / 3600 << " ";
	BT2 %= 3600;
	cout << BT2 / 60 << " ";
	BT2 %= 60;
	cout << BT2 << endl;

	cout << CT2 / 3600 << " ";
	CT2 %= 3600;
	cout << CT2 / 60 << " ";
	CT2 %= 60;
	cout << CT2 << endl;
	return 0;
}
