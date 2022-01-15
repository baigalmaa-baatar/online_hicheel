#include <stdio.h>

int	main(void)
{
	int i;

	i = 1;
	while (i < 10)
	{
		printf("i is %d\n", i);
		if (i == 5)
		{
			break ;
		}
		else
		{
			i++;
		}
	}
	printf("after while operator, i is now : %d\n",i);
	return (0);
}
