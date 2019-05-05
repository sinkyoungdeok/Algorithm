#include <iostream>
#include <string>
#include <algorithm>
#include <cstdio>
#include <iomanip>


using namespace std;
int main() 
{
	int Re = 0;
	int Pt = 0;
	int Cc = 0;
	int Ea = 0;
	int Tb = 0;
	int Cm = 0;
	int Ex = 0;
	int Total = 0;
	string num;
	while(cin>>num)
	{
		if (num == "Re")
		{
			Re++;
			Total++;
		}
		else if (num == "Pt")
		{
			Pt++;
			Total++;
		}
		else if (num == "Cc")
		{
			Cc++;
			Total++;
		}
		else if (num == "Ea")
		{
			Ea++;
			Total++;
		}
		else if (num == "Tb")
		{
			Tb++;
			Total++;
		}
		else if (num == "Cm")
		{
			Cm++;
			Total++;
		}
		else if (num == "Ex")
		{
			Ex++;
			Total++;
		}
		else
			Total++;
	}

	cout << setprecision(2) << fixed; 
	cout << "Re " << Re << " " << (double)Re / Total << endl;
	cout << "Pt " << Pt << " " << (double)Pt / Total << endl;
	cout << "Cc " << Cc << " " << (double)Cc / Total << endl;
	cout << "Ea " << Ea << " " << (double)Ea / Total << endl;
	cout << "Tb " << Tb << " " << (double)Tb / Total << endl;
	cout << "Cm " << Cm << " " << (double)Cm / Total << endl;
	cout << "Ex " << Ex << " " << (double)Ex / Total << endl;
	cout << "Total " << Total << " " << "1.00" << endl;

	return 0;
}
