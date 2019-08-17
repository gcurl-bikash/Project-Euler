#include <stdio.h>
int	ft_pallindrome(int nb);

int	ft_pallindrome(int nb)
{
	int test, save;

	test = 0;
	save = nb;
	while (nb > 0) //reversing the number
	{
		test = test * 10 + nb % 10;
//		printf("test %d ,", test);
//		printf("nb %d\n", nb);
		nb /= 10;

	}
	if (test == save) //checking the pallindromic equivalence
	{
		return (1);
	}
	return (0);
}

int	main()
{
	int a = 100, b, nb, high;

	while (a <= 999)
	{
		b = 100;
		while (b <= 999)
		{
			nb = a * b;
//			printf("a %d, b %d, nb %d\n", a, b, nb);
			if (ft_pallindrome(nb) && high < nb)
			{
				high = nb;
			}
			b++;
		}
//		printf("%d\n", a);
		a++;
	}
	printf("high %d\n", high);
	return (0);
}
