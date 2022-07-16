/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tidavtya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/27 20:50:04 by tidavtya          #+#    #+#             */
/*   Updated: 2022/04/10 13:59:00 by tidavtya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**mall_err(char **arr)
{
	unsigned int	i;

	i = 0;
	while (arr[i])
	{
		free(arr[i]);
		i++;
	}
	free(arr);
	return (0);
}

int	count_sub_strs(const char *s, char c)
{
	unsigned int	count;
	unsigned int	i;

	if (!s[0])
		return (0);
	i = 0;
	count = 0;
	while (s[i])
	{
		if (s[i] == c && s[i + 1] != c && s[i + 1] != '\0')
			count++;
		i++;
	}
	if (s[0] != c)
		count++;
	return (count);
}

char	**doit(char *s, char c, char **arr, unsigned int last_i)
{
	char			*subs;
	unsigned int	i;

	while (strrchr(s, c) && *(strrchr(s, c) + 1) == '\0' && c != '\0')
		*strrchr(s, c) = '\0';
	if (!strrchr(s, c) || c == '\0')
		subs = s;
	else
		subs = (char *)strrchr(s, c) + 1;
	arr[last_i] = (char *)malloc((strlen(subs) + 1) * sizeof(char));
	if (!arr)
		return (mall_err(arr));
	i = 0;
	while (subs[i])
	{
		arr[last_i][i] = subs[i];
		i++;
	}
	arr[last_i][i] = '\0';
	*subs = '\0';
	return (0);
}

char	**ft_split(char const *s, char c)
{
	char			**ret;
	char			*str;
	int				i;
	unsigned int	count;

	if (!s)
		return (NULL);
	str = strdup(s);
	count = count_sub_strs(s, c);
	i = count - 1;
	ret = (char **)malloc((count + 1) * sizeof (char *));
	if (!ret)
		return (NULL);
	ret[count] = NULL;
	while (i >= 0)
	{
		doit(str, c, ret, i);
		i--;
	}
	return (ret);
}
