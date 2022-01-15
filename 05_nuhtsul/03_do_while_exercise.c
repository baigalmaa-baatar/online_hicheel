#include <stdio.h>

int	main(void)
{
	int i;

	i = 1;
	do
	{
		printf("i is %d\n", i);
		i++;
	}
	while (i <= 5);
	printf("after while operator, i is now : %d\n",i);
	return (0);
}
