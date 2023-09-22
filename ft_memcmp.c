/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbinder <tbinder@student.42vienna.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 23:33:53 by tbinder           #+#    #+#             */
/*   Updated: 2023/09/14 23:35:51 by tbinder          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t		i;

	i = 0;
	while (i < n)
	{
		if (*(unsigned char *)(s1 + i) != (*(unsigned char *)(s2 + i)))
		{
			return (*(unsigned char *)(s1 + i) - (*(unsigned char *)(s2 + i)));
		}
		i++;
	}
	return (0);
}