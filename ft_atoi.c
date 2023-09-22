/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbinder < tbinder@student.42vienna.com     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 23:44:10 by tbinder           #+#    #+#             */
/*   Updated: 2023/09/19 12:51:45 by tbinder          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *nptr)
{
	int	number;
	int	sign;

	number = 0;
	sign = 1;
	while (*nptr == ' ' || *nptr == '\f' || *nptr == '\n'
		|| *nptr == '\r' || *nptr == '\t' || *nptr == '\v')
		nptr++;
	if (*nptr == '-' || *nptr == '+')
	{
		if (*nptr == '-')
			sign *= -1;
		nptr++;
	}
	while (*nptr >= '0' && *nptr <= '9')
	{
		number = number * 10 + *nptr - '0';
		nptr++;
	}
	return (sign * number);
}