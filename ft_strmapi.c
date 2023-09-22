/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbinder <tbinder@student.42vienna.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/15 00:20:21 by tbinder           #+#    #+#             */
/*   Updated: 2023/09/15 11:22:19 by tbinder          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	unsigned int	len;
	char			*newstr;

	i = 0;
	if (!s || !f)
		return (NULL);
	len = ft_strlen(s);
	newstr = (char *)malloc(sizeof(char) * (len + 1));
	if (!newstr)
		return (NULL);
	while (s[i])
	{
		newstr[i] = f(i, (char)s[i]);
		i++;
	}
	newstr[i] = '\0';
	return (newstr);
}