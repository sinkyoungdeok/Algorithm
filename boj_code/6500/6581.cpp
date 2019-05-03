#include <cstdio>
#include <iostream>
#include <string>
using namespace std;


int main() 
{
	int eight = 0;
	string num;
	while (cin >> num)
	{
		if (num == "<br>")
		{
			cout << endl;
			eight = 0;
		}
		else if (num == "<hr>")
		{
			if (eight) cout << endl;
			cout << "--------------------------------------------------------------------------------" << endl;
			eight = 0;
		}
		else {
			if (eight + num.length() > 80)
			{
				cout << endl << num << " ";
				eight = num.length()+1;
			}
			else
			{
				cout << num << " ";
				eight += num.length()+1;
			}
		}
	}
	
	return 0;
}
