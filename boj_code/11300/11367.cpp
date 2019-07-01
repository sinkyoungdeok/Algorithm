#include <iostream>
#include <string>
using namespace std;
int main()
{ 
	int n = 0;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		string name;
		int score = 0;
		cin >> name >> score;
		cout << name << " ";
		if (score >= 97)
			cout << "A+" << endl;
		else if (score >= 90)
			cout << "A" << endl;
		else if (score >= 87)
			cout << "B+" << endl;
		else if (score >= 80)
			cout << "B" << endl;
		else if (score >= 77)
			cout << "C+" << endl;
		else if (score >= 70)
			cout << "C" << endl;
		else if (score >= 67)
			cout << "D+" << endl;
		else if (score >= 60)
			cout << "D" << endl;
		else
			cout << "F" << endl;

	}

	return 0;
}
