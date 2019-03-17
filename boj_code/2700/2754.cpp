#include <iostream>
#include <string>
using namespace std;
int main()
{
	string a;
	cin >> a;
	if (a == "A+")
		cout << "4.3" << endl;
	else if (a == "A0")
		cout << "4.0" << endl;
	else if (a == "A-")
		cout << "3.7" << endl;
	else if (a == "B+")
		cout << "3.3" << endl;
	else if (a == "B0")
		cout << "3.0" << endl;
	else if (a == "B-")
		cout << "2.7" << endl;
	else if (a == "C+")
		cout << "2.3" << endl;
	else if (a == "C0")
		cout << "2.0" << endl;
	else if (a == "C-")
		cout << "1.7" << endl;
	else if (a == "D+")
		cout << "1.3" << endl;
	else if (a == "D0")
		cout << "1.0" << endl;
	else if (a == "D-")
		cout << "0.7" << endl;
	else if (a == "F")
		cout << "0.0" << endl;


	return 0;
}
