#include <iostream>
using namespace std;
int main() 
{
	char *num = new char[101];
	int check = 0;
	while (cin.getline(num,101)) {
		check++;
	}
	cout << check << endl;
	return 0;
}
