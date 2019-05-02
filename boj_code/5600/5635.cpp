#include <iostream>
#include <string>
using namespace std;
int main()
{
	int n = 0;
	cin >> n;
	string *name = new string[n];
	int *day = new int[n];
	int *mon = new int[n];
	int *year = new int[n];
	string maxname;
	int maxday = 0;
	int maxmon = 0;
	int maxyear = 0;
	string minname;
	int minday = 50;
	int minmon = 15;
	int minyear = 5000;
	for (int i = 0; i < n; i++)
	{
		cin >> name[i] >> day[i] >> mon[i] >> year[i];
		if (maxyear < year[i])
		{
			maxname = name[i];
			maxday = day[i];
			maxmon = mon[i];
			maxyear = year[i];
		}
		else if (maxyear == year[i] && maxmon < mon[i])
		{
			maxname = name[i];
			maxday = day[i];
			maxmon = mon[i];
			maxyear = year[i];
		}
		else if (maxyear == year[i] && maxmon == mon[i] && maxday < day[i])
		{
			maxname = name[i];
			maxday = day[i];
			maxmon = mon[i];
			maxyear = year[i];
		}
		
		if (minyear > year[i])
		{
			minname = name[i];
			minday = day[i];
			minmon = mon[i];
			minyear = year[i];
		}
		else if (minyear == year[i] && minmon > mon[i])
		{
			minname = name[i];
			minday = day[i];
			minmon = mon[i];
			minyear = year[i];
		}
		else if (minyear == year[i] && minmon == mon[i] && minday > day[i])
		{
			minname = name[i];
			minday = day[i];
			minmon = mon[i];
			minyear = year[i];
		}
	}
	cout << maxname << endl << minname << endl;

	
	return 0;
}
