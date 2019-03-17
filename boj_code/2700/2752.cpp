#include <iostream>
#include <string.h>
using namespace std;
int main()
{
	int n[3];
	cin >> n[0] >> n[1] >> n[2];
	for ( int i=0 ;i< 3;i++)
		for (int j=0; j<i;j++)
			if (n[i] < n[j])
			{
				int swap = n[i];
				n[i] = n[j];
				n[j] = swap;
			}
	cout << n[0] <<" "<< n[1]<<" " << n[2] << endl;

	return 0;
}
