#include <iostream>
#include <string>
using namespace std;
int main()
{
	string str;

	for (; getline(cin, str);)
		cout << str << endl;


	return 0;
}
