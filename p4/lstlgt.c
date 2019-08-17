/*getting the digits of numbers and getting a range*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int	main(int argc, char **argv)
{
	int a;
	int b;
	int lst_a;
	int lgt_a;
	int lst_b;
	int lgt_b;



	if (argc == 3)
	{
		a = atoi(argv[1]); //getting the value of the digit
		b = atoi(argv[2]); //getting the value of the second digit
		lst_a = pow(10, a -1);
		lgt_a = pow(10, a) - 1;
		lst_b = pow(10, b - 1);
		lgt_b = pow(10, b) - 1;
		printf("lst_a %d lgt_a %d\n and lst_a %d lgt_b %d\n", lst_a, lgt_a, lst_b, lgt_b);
	}
	return (0);
}
