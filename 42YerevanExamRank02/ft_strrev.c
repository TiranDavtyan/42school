#include <stdio.h>

char	*ft_strrev(char *str)
{
	int	len;
	int	i;
	char	tmp;

	len = 0;
	i = 0;
	while (str[len])
		len++;
	len -= 1;
	while (i < len)
	{
		tmp = str[i];
		str[i] = str[len];
		str[len] = tmp;
		i++;
		len--;
	}
	// str[i] = '\0';
	return (str);
}
int	main(void)
{
	int n ;

	n =0;

	char  s[] = "Hello World";
	char	*t = (char []){"Xello"};
		t[0] = 'G';
	ft_strrev(s);
	printf("%s\n", t);
//	printf("%p\n", &t);
//	printf("%p\n", &s[0]);
//	printf("%c\n",*s );
	return (0);
}

	
