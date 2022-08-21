# include <unistd.h>
# include <stdio.h>

int	strToNum(char *s)
{
	int	i = 0;
	int r = 0;

	while (s[i])
	{
		r = r * 10 + (s[i] - '0');
		i++;
	}
	return(r);
}

void	printNum(int n)
{
	char	x = n + '0';
	if (n < 10)
		write(1, &x, 1);
	else
	{
		printNum(n / 10);
		printNum(n % 10);
	}
}	

int	primeCheck(int n)
{
	int	i = 2;
	while(i < n)
	{
		if(n % i == 0)
			return (0);
		i++;
	}
	return (1);
}

int	main(int argc, char **argv)
{
	if(argc == 2)
		{
			int	i = 2;
			int	sum = 0;

			int	num = strToNum(argv[1]);
		//	printNum(num);
			if(num <= 0)
				return (0);
			while (i <= num)
				{
					if(primeCheck(i))
						sum += i; 	
					i++;
				}
			printNum(sum);
		}
	else
		write(1, "0", 1);
	write(1,"\n", 1);
	return (0);
}
