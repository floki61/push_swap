/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oel-berh <oel-berh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/03 14:32:22 by oel-berh          #+#    #+#             */
/*   Updated: 2022/03/17 23:26:34 by oel-berh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	if (!str)
		return (0);
	while (str[i])
		i++;
	return (i);
}

static int	whitespace(char c)
{
	if (c == '\n' || c == '\v' || c == '\f' || c == '\t' || c == '\r')
		return (1);
	if (c == ' ')
		return (1);
	return (0);
}

long long	ft_atoi(const char *str)
{
	int			i;
	int			negativity;
	long long	result;

	i = 0;
	negativity = 1;
	result = 0;
	while (whitespace(str[i]))
		i++;
	if (str[i] == '-')
		negativity = -1;
	if (str[i] == '+' || str[i] == '-')
		i++;
	while (ft_isdigit(str[i]))
	{
		result = result * 10 + (str[i] - 48);
		i++;
	}
	return (result * negativity);
}

char	*ft_strjoin(char *s1, char *s2)
{
	char	*ret;
	int		i;
	int		str1;
	int		str2;
	int		strr1;

	i = -1;
	str1 = ft_strlen(s1);
	str2 = ft_strlen(s2);
	ret = (char *) malloc(sizeof(char) * (str1 + str2 + 1));
	if (!ret)
	{
		free (ret);
		return (NULL);
	}
	if (s1)
		while (s1[++i])
			ret[i] = s1[i];
	strr1 = str1;
	i = 0;
	while (s2[i])
		ret[str1++] = s2[i++];
	ret[strr1 + str2] = '\0';
	free(s1);
	return (ret);
}

char	*ft_substr(char *s, int start, int len)
{
	char	*c;
	int		j;

	j = 0;
	if (!s)
		return (NULL);
	if (s[0] == '\0' || start > ft_strlen(s))
	{
		c = malloc(1 * sizeof(char));
		if (!c)
			return (NULL);
		c[0] = '\0';
		return (c);
	}
	c = (char *)malloc((len + 1) * sizeof(char));
	if (!c)
		return (NULL);
	while (s[start] && len > 0)
	{
		c[j++] = s[start++];
		len--;
	}
	c[j] = '\0';
	return (c);
}
