#include <iostream>
#include <cstdio>
#include <cmath>
#include <string>
#include <algorithm>
using namespace std;
int main()
{
	while (1)
	{
		string name;
		int age;
		int weight;
		cin >> name >> age >> weight;

		if (name == "#" && age == 0 && weight == 0)
			return 0;


		cout << name << " ";
		if (age > 17 || weight >= 80)
			cout << "Senior" << endl;
		else
			cout << "Junior" << endl;

	}
	return 0;
}
