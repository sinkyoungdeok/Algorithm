#include <cstdio>
int main() 
{
	double x, y, n, f;
	scanf("%lf %lf %lf", &x, &y, &n);
	f = x / y;
	while (n--) a
	{
		scanf("%lf %lf", &x, &y);
		if (f > x / y)
			f = x / y;
	}
	printf("%.2lf", f * 1000);
	return 0;
}
