/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbinder <tbinder@student.42vienna.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 19:35:41 by tbinder           #+#    #+#             */
/*   Updated: 2023/09/14 19:38:47 by tbinder          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char	*srci;
	char	*desti;

	srci = (char *)src;
	desti = (char *)dest;
	if (srci < desti)
	{
		while (n--)
		{
			desti[n] = srci[n];
		}
	}
	else
		ft_memcpy(desti, srci, n);
	return (dest);
}
