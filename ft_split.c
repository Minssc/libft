/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minsunki <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/25 23:54:10 by minsunki          #+#    #+#             */
/*   Updated: 2021/03/03 23:55:57 by minsunki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*create_string(char const *from, char const *to)
{
	char	*ret;
	int		i;

	i = 0;
	ret = (char *)malloc(sizeof(char) * (int)(to - from + 1));
	while (i < (int)(to - from))
	{
		ret[i] = from[i];
		i++;
	}
	ret[to - from] = '\0';
	return (ret);
}

static int	count_strings(char const *str, char sep)
{
	int		ret;
	int		is_str;

	ret = 0;
	is_str = 0;
	while (*str)
	{
		if (sep == *str)
		{
			if (is_str)
			{
				ret++;
				is_str = 0;
			}
		}
		else
			is_str = 1;
		str++;
	}
	return (is_str ? ret + 1 : ret);
}

static void	assign_strings(char **arr, char const *str, char sep)
{
	char const	*last;
	int			is_str;
	int			i;

	i = 0;
	last = str;
	is_str = 0;
	while (*str)
	{
		if (sep == *str)
		{
			if (is_str)
				arr[i++] = create_string(last, str);
			is_str = 0;
			last = str;
		}
		else if (!is_str)
		{
			last = str;
			is_str = 1;
		}
		str++;
	}
	if (is_str)
		arr[i] = create_string(last, str);
}

char		**ft_split(char const *s, char c)
{
	char	**ret;
	int		i;

	if (!s || !c)
		return (0);
	i = count_strings(s, c);
	if (!(ret = (char **)malloc(sizeof(char *) * (i + 1))))
		return (0);
	ret[i] = 0;
	assign_strings(ret, s, c);
	return (ret);
}
