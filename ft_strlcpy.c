/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minsunki <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/25 13:06:08 by minsunki          #+#    #+#             */
/*   Updated: 2021/03/03 20:22:37 by minsunki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, char *src, size_t size)
{
	size_t i;
	size_t ssize;

	i = 0;
	ssize = ft_strlen(src);
	if (!dest || !src)
		return (0);
	if (size)
	{
		while (src[i] != '\0' && (i < (size - 1)))
		{
			dest[i] = src[i];
			i++;
		}
	}
	if (i && size < ssize)
		dest[size - 1] = '\0';
	else if (size)
		dest[i] = '\0';
	return (ssize);
}
