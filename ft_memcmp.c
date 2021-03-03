/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minsunki <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/12 13:04:06 by minsunki          #+#    #+#             */
/*   Updated: 2021/03/03 20:29:33 by minsunki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char *sp1;
	unsigned char *sp2;

	sp1 = (unsigned char *)s1;
	sp2 = (unsigned char *)s2;
	while (n--)
		if (*sp1++ != *sp2++)
			return (*(sp1 - 1) - *(sp2 - 1));
	return (0);
}
