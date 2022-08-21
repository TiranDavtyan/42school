#include <unistd.h>
#include <string.h>
#include <stdio.h>
int	main(int argc, char **argv)
{
	if (argc == 2)
	{
		int	i = strlen(argv[1]) - 1;
		int	j;
		while(i-- >= 0)
		{
			while(argv[1][i--] > 32)
			j = i;
			while(argv[1][++j] > 32)
				write(1, &argv[1][j], 1);
			if(i >= 1)
			   	write(1, " ", 1);
		}
	}
	write(1, "\n", 1);
	return(0);
}
