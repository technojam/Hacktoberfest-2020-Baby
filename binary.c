#include <stdio.h>

int count_3s(int n)

{
	int count = 0;
	while (n > 0)
	{
		if (n % 10 == 3)
		{
			count++;
		}
      n = n / 10;
	}
return count;
}

int count_in_range(int n)
{
	int count = 0 ;
	for (int i = 2; i <= n; i++)
	{
		count += count_3s(i);
	}
	return count;
}

int main()
{
	int n;
	printf("\nEnter the end value : ");
	scanf("%d", &n);
	printf("\nTotal occurrences of 3 from 0 to %d is %d\n", n,count_in_range(n));
	return 0;
}

