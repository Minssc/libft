/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minsunki <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/22 13:10:54 by minsunki          #+#    #+#             */
/*   Updated: 2021/03/03 20:31:53 by minsunki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	checkset(char c, char const *set)
{
	while (*set)
		if (c == *set++)
			return (1);
	return (0);
}

char		*ft_strtrim(char const *s1, char const *set)
{
	int		s;
	int		e;
	int		i;
	char	*ret;

	if (!s1)
		return (0);
	if (!set)
		return (ft_strdup(s1));
	s = 0;
	e = ft_strlen(s1) - 1;
	while (checkset(s1[s], set))
		s++;
	if ((size_t)s == ft_strlen(s1))
		return ((char *)malloc(0));
	while (checkset(s1[e], set))
		e--;
	if (!(ret = (char *)malloc(sizeof(char) * (e - s + 2))))
		return (0);
	ret[e - s + 1] = '\0';
	i = 0;
	while (s <= e)
		ret[i++] = s1[s++];
	return (ret);
}
