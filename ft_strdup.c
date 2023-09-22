/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbinder < tbinder@student.42vienna.com     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 23:59:21 by tbinder           #+#    #+#             */
/*   Updated: 2023/09/19 12:26:38 by tbinder          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	size_t		i;
	size_t		length;
	char		*copy;

	length = 0;
	while (s[length] != '\0')
	{
		length++;
	}
	copy = (char *)malloc(length +1);
	if (copy != NULL)
	{
		i = 0;
		while (i < length)
		{
			copy[i] = s[i];
			i++;
		}
		copy[length] = '\0';
	}
	return (copy);
}
