/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minsunki <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/07 13:20:59 by minsunki          #+#    #+#             */
/*   Updated: 2021/03/03 20:28:46 by minsunki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char *pd;
	char *ps;

	pd = (char *)dest;
	ps = (char *)src;
	if (dest == src)
		return (dest);
	if (ps < pd)
	{
		while (n--)
			pd[n] = ps[n];
	}
	else
	{
		while (n--)
			*pd++ = *ps++;
	}
	return (dest);
}
