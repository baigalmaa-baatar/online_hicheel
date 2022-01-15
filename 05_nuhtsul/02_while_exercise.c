#include <stdio.h>

int	main(void)
{
	int i;

	i = 1;
	while (i <= 5)
	{
		printf("i is %d\n", i);
		i++;
	}
	printf("after while operator, i is now : %d\n",i);
	return (0);
}
