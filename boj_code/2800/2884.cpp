#include <iostream>
using namespace std;
int main()
{
	int time;
	int minute;
	cin >> time >> minute;

	if (minute < 45)
	{
		time--;
		minute = minute + 60 - 45;
	}
	else
	{
		minute = minute - 45;
	}
	if (time == -1)
		time = 23;
	cout << time << " " << minute << endl;
	return 0;
}
