#include <iostream>
using namespace std;
int main()
{	
	int *num = new int[8];
	int asccheck = 0;
	int descheck = 0;
	int initial = 0;
	for (int i = 0; i < 8; i++)
		cin >> num[i];
	initial = num[0];
	for (int i = 1; i < 8; i++) // 만약 asc이면 asccheck값이 0
	{
		if (initial >= num[i])
			asccheck = 1;
		else
			initial = num[i];
	}
	initial = num[0];
	for (int i = 1; i < 8; i++) // 만약 desc이면 descheck값이 0
	{
		if (initial <= num[i])
			descheck = 1;
		else
			initial = num[i];
	}
	
	if (asccheck == 0)
		cout << "ascending" << endl;
	else if (descheck == 0)
		cout << "descending" << endl;
	else
		cout << "mixed" << endl;

	return 0;
}
