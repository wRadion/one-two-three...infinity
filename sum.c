#include <stdio.h>
int main()
{
	long long sum = 0;
	int i;
	for (i = 1; i < 1000000000; i++)
	{
		sum += i;
	}
	printf("%lld\n", sum);
	return 0;
}
