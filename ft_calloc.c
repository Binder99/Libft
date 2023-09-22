/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbinder <tbinder@student.42vienna.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 23:55:44 by tbinder           #+#    #+#             */
/*   Updated: 2023/09/14 23:58:37 by tbinder          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmeb, size_t size)
{
	void	*ptr;

	ptr = malloc(nmeb * size);
	if (!ptr)
		return (NULL);
	ft_bzero(ptr, nmeb * size);
	return (ptr);
}
