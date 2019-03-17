#include <iostream>
#include <stdio.h>
#include <string.h>
using namespace std;
int main()
{
	int time, minute;
	int plustminute;
	cin >> time >> minute >> plustminute;
	int summinute = minute + plustminute;
	if (summinute >= 60)
	{
		time += summinute / 60;
		summinute = summinute % 60;
	}
	if (time >= 24)
	{
		time = time % 24;
	}



	cout << time << " " << summinute << endl;
	return 0;
}
