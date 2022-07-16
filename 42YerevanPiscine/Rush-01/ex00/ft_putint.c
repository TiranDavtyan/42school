#include <unistd.h>

void ft_putint(int i)
{
	write(1, &i, 1);
}
