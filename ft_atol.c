/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atol.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minsunki <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/26 13:05:11 by minsunki          #+#    #+#             */
/*   Updated: 2021/06/06 18:36:15 by minsunki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_isspace(char c)
{
	return (c == '\v' || c == '\t' || c == '\r' || c == '\n' || c == '\f' ||
																	c == ' ');
}

long long	ft_atol(const char *str)
{
	long long			result;
	int					is_neg;

	while (ft_isspace(*str))
		str++;
	is_neg = (*str == '-');
	if (*str == '+' || *str == '-')
		str++;
	result = 0;
	while ('0' <= *str && *str <= '9')
	{
		result *= 10;
		result += *str - '0';
		str++;
	}
	return (is_neg ? -result : result);
}
