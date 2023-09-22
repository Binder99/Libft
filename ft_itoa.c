/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbinder <tbinder@student.42vienna.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/15 11:16:42 by tbinder           #+#    #+#             */
/*   Updated: 2023/09/15 11:20:30 by tbinder          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_count(long int t, int n)
{
	int	num;

	num = 0;
	while (t != 0)
	{
		t /= 10;
		num++;
	}
	if (n == 0)
		num = 1;
	if (n < 0)
		num++;
	return (num);
}

char	*ft_itoa(int n)
{
	char		*str;
	int			numb;
	long int	temp;

	numb = 0;
	temp = n;
	numb = ft_count(temp, n);
	if (n < 0)
		temp = temp * -1;
	str = malloc(numb + 1);
	if (str == NULL)
		return (NULL);
	str[numb] = '\0';
	while ((numb - 1) >= 0)
	{
		str[numb - 1] = '0' + (temp % 10);
		temp /= 10;
		numb--;
	}
	if (n < 0)
		str[0] = '-';
	return (str);
}