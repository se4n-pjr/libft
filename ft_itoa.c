/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpoh <jpoh@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/24 16:21:10 by jpoh              #+#    #+#             */
/*   Updated: 2026/09/24 17:12:21 by jpoh             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	get_len(long num)
{
	int	len;

	len = 0;
	if (num <= 0)
	{
		len++;
		num = -num;
	}
	while (num > 0)
	{
		len++;
		num /= 10;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	char	*itoa;
	long	num;
	int		len;

	num = n;
	len = get_len(num);
	itoa = malloc(len + 1);
	if (!itoa)
		return (NULL);
	itoa[len] = '\0';
	if (num == 0)
		itoa[0] = '0';
	if (num < 0)
	{
		itoa[0] = '-';
		num = -num;
	}
	while (num > 0)
	{
		len--;
		itoa[len] = (num % 10) + '0';
		num /= 10;
	}
	return (itoa);
}
