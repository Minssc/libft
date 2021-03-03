/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minsunki <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/26 13:05:11 by minsunki          #+#    #+#             */
/*   Updated: 2021/03/03 20:23:53 by minsunki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isspace(char c)
{
	if (c == '\v' || c == '\t' || c == '\r')
		return (1);
	if (c == '\n' || c == '\f' || c == ' ')
		return (1);
	return (0);
}

int	seekn(char **str)
{
	int	is_neg;

	is_neg = 0;
	while (ft_isspace(**str))
		(*str)++;
	while (**str == '-' || **str == '+')
	{
		if (**str == '-')
			is_neg = !is_neg;
		(*str)++;
	}
	return (is_neg);
}

int	ft_atoi(char *str)
{
	int	result;
	int	is_neg;

	is_neg = seekn(&str);
	result = 0;
	while ('0' <= *str && *str <= '9')
	{
		result *= 10;
		result += *str - '0';
		str++;
	}
	return (is_neg ? -result : result);
}
