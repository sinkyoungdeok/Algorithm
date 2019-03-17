#include <iostream>
#include <string>
using namespace std;
int main()
{
	bool fbi = false;
	for (int i = 0; i < 5; i++)
	{
		string num;
		cin >> num;
		if (!(num.find("FBI") == std::string::npos))
		{
			fbi = true;
			cout << i + 1 << " ";
		}


	}
	if (fbi == false)
		cout << "HE GOT AWAY!" << endl;
	return 0;
}
