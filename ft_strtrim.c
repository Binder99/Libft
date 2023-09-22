/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbinder <tbinder@student.42vienna.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/15 00:09:58 by tbinder           #+#    #+#             */
/*   Updated: 2023/09/15 00:10:27 by tbinder          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*result;
	size_t	start;
	size_t	end;

	start = 0;
	end = ft_strlen(s1) - 1;
	if (!s1)
		return (NULL);
	if (!*s1)
		return (ft_strdup(""));
	while (s1[start] && ft_strchr(set, s1[start]))
		start++;
	while (end && ft_strchr(set, s1[end]))
		end--;
	result = ft_substr(s1, start, end - start + 1);
	return (result);
}