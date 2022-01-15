#include <unistd.h>

int	main(void)
{
	char *str = "Hello World!";
	int	length_str = 12;

	write(1, str, length_str);
	write(1, "\n", 1);
}
