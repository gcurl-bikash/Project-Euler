#include <stdio.h>

int	main(void)
{
	int i;
	int nb;
	int subs;
	int largestprime;

	i = 1;
	printf("Type the number to find its largest prime factor:\n");
	scanf("%d", &nb);

	subs = nb;
	printf("The number you have entered is %d\n", nb);
	while (i <= nb)
	{
		if (nb % i == 0)
		{
			while (nb % i == 0)
			{
				nb = nb / i;
				printf("%d , %d\n", i, nb);
				largestprime = i++;
			}
		}
		i++;
	}
	printf("The largest prime number of %d number is %d\n",subs, largestprime);
	return (0);
}
