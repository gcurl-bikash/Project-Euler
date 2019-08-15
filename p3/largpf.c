#include <stdio.h>

int	main(void)
{
	int i;
	long int nb;
	long int subs;
	int largestprime;

	i = 1;
	printf("Type the number to find its largest prime factor:\n");
	scanf("%ld", &nb);

	subs = nb;
	printf("The number you have entered is %ld\n", nb);
	while (i <= nb)
	{
		if (nb % i == 0)
		{
			while (nb % i == 0)
			{
				nb = nb / i;
				printf("%d, %ld\n", i, nb);
				largestprime = i++;
			}
		}
		i++;
	}
	printf("The largest prime number of %ld number is %d\n",subs, largestprime);
	return (0);
}
