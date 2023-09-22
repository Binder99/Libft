/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbinder <tbinder@student.42vienna.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/15 12:02:56 by tbinder           #+#    #+#             */
/*   Updated: 2023/09/15 12:02:58 by tbinder          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_count(char const *s, char c)
{
	size_t	count;

	count = 0;
	if (!s || !*s)
		return (0);
	while (*s)
	{
		while (*s == c)
			s++;
		if (*s)
			count++;
		while (*s != c && *s)
			s++;
	}
	return (count);
}

static void	*ft_free(char **str, int i)
{
	while (i >= 0)
	{
		free(str[i]);
		i--;
	}
	free(str);
	return (NULL);
}

static size_t	ft_wordlength(const char *s, char c)
{
	if (!ft_strchr(s, c))
		return (ft_strlen(s));
	else
		return (ft_strchr(s, c) - s);
}

char	**ft_split(char const *s, char c)
{
	char	**str;
	size_t	len;
	int		i;

	i = 0;
	if (!s)
		return (NULL);
	str = (char **)malloc(sizeof(char *) * (ft_count(s, c) + 1));
	if (!str)
		return (NULL);
	while (*s)
	{
		while (*s == c && *s)
			s++;
		if (!*s)
			break ;
		len = ft_wordlength(s, c);
		str[i] = ft_substr(s, 0, len);
		if (!str[i++])
			return (ft_free(str, --i));
		s += len;
	}
	str[i] = NULL;
	return (str);
}