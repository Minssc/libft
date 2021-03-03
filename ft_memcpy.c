/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minsunki <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/07 13:05:54 by minsunki          #+#    #+#             */
/*   Updated: 2021/03/03 20:27:22 by minsunki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char *pdest;
	char *psrc;

	if (dest == src || !n)
		return (dest);
	if (!dest && !src)
		return (0);
	pdest = (char *)dest;
	psrc = (char *)src;
	while (n--)
		*pdest++ = *psrc++;
	return (dest);
}
