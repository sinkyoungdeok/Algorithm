#include <iostream>
#include <cstring>
#include <string>
using namespace std;
int main()
{
	string num;
	/*cin >> num;
	num.push_back(num[0]);
	num.erase(0, 1);
	cout << num;*/
	while (cin >> num)
	{
		if (num[0] == '#')
			break;
		for (int i = 0; i < num.length(); i++)
		{
			if (num[0] == 'a' || num[0] == 'e' || num[0] == 'i' || num[0] == 'o' || num[0] == 'u')
				break;
			else
			{
				num.push_back(num[0]);
				num.erase(0, 1);
			}
		}

		cout << num << "ay" << endl;
	}
	return 0;
}
