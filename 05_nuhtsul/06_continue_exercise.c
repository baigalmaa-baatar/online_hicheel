#include <stdio.h>

int	main()
{
	for (int i=0; i<=8; i++)
	{
		if (i == 4)
		{
			/* when i is 4, the loop will skip printf part */
			continue;
		}
		printf("%d\n", i);
	}
	return 0;
}
