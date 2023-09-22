/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbinder <tbinder@student.42vienna.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 19:54:56 by tbinder           #+#    #+#             */
/*   Updated: 2023/09/18 10:09:17 by tbinder          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	x;

	i = 0;
	x = 0;
	while (dest[i] != '\0' && i < size)
		i++;
	while (src[x] != '\0' && (i + x + 1) < size)
	{
		dest[i + x] = src[x];
		x++;
	}
	if (i < size)
		dest[i + x] = '\0';
	return (i + ft_strlen(src));
}
