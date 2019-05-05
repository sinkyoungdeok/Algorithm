#include <iostream>
using namespace std;
int main()
{
	int n = 0;
	cin >> n;
	while(n--){
		int a_size = 0;
		int b_size = 0;
		int c_size = 0;

		cin >> a_size;
		int *a = new int[a_size];
		for (int i = 0; i < a_size; i++)
			cin >> a[i];
		
		cin >> b_size;
		int *b = new int[b_size];
		for (int i = 0; i < b_size; i++)
			cin >> b[i];
		
		cin >> c_size;
		int *c = new int[c_size];
		for (int i = 0; i < c_size; i++)
			cin >> c[i];
		int sum_check[50] = { 0 };
		int sum_check_index = 0;
		for (int i = 0; i < a_size; i++)
			for (int j = 0; j < b_size; j++)
				for (int k = 0; k < c_size; k++)
				{
					int sum = 0;
					sum += a[i] + b[j] + c[k];
					int sum_temp = sum;
					while (sum)
					{
						if (sum % 10 == 5 || sum % 10 == 8)
							sum /= 10;
						else
							break;
					}
					if (sum == 0) // 행운의 숫자 ok
					{
						int check = 0;
						for (int q = 0; q < sum_check_index; q++)
							if (sum_temp == sum_check[q])
								check = 1;
						if (check == 0)
							sum_check[sum_check_index++] = sum_temp;

					}
				}
		cout << sum_check_index << endl;
	}

	return 0;
}
