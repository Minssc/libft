/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minsunki <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/13 13:17:30 by minsunki          #+#    #+#             */
/*   Updated: 2021/03/03 20:29:51 by minsunki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, char *src, size_t size)
{
	unsigned int	dlen;
	int				slen;
	unsigned int	mlen;
	int				i;

	dlen = ft_strlen(dest);
	slen = ft_strlen(src);
	mlen = 0;
	i = 0;
	while (mlen < size && dest[mlen])
		mlen++;
	while (i < slen && dlen + i + 1 < size)
	{
		dest[dlen + i] = src[i];
		i++;
	}
	dest[dlen + i] = 0;
	return (mlen + slen);
}
