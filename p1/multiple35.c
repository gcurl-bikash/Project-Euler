#include <stdio.h>

int	main(void)
{
	int i;
	int sum;
	int lt;//limit
	
	i = 1;
	sum = 0;
	lt = 1000;
	while (3*i < lt || 5*i < lt)
	{
		if (3*i < lt )
			sum = sum + 3*i;
		if (5*i < lt)
			sum = sum + 5*i;
		if (3*i % 15 == 0)
			sum = sum - 3*i;
		i++;
	}
	printf("The sum of all the numbers up to 10 %d\n", sum);
	return (0);
}
