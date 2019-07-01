#include <iostream>
#include <string>
using namespace std;
int main()
{ 
	int n = 0;
	cin >> n;
	while (n != 0)
	{
		string *name = new string[n];
		double *hight = new double[n];
		double maxhight = 0;
		for (int i = 0; i < n; i++)
		{
			cin >> name[i] >> hight[i];
			if (maxhight < hight[i])
				maxhight = hight[i];
		}

		for (int i = 0; i < n; i++)
			if (maxhight == hight[i])
				cout << name[i] << endl;

		cin >> n;
	}

	return 0;
}
