#include <stdio.h>

int	main(void)
{
	int i;
	int j;
	int sum;

	i = 1;
	j = 2;
	sum = 0;
	while (i <= 4000000 || j <= 4000000)
	{
		if (i % 2 == 0)
			sum = sum + i;
		if (j % 2 == 0)
			sum = sum + j;
		i = i + j;
		j = j + i;
	}
	printf("The sum of even-numbered terms upto 4million is %d\n", sum);
	return (0);
}

