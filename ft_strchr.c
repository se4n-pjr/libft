/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpoh <jpoh@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/23 16:52:26 by jpoh              #+#    #+#             */
/*   Updated: 2026/09/23 16:55:34 by jpoh             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h" //string_character to look for a single char within a string

char	*ft_strchr(const char *s, int c)
{
	unsigned char	target;

	target = (unsigned char)c;
	while (*s)
	{
		if ((unsigned char)*s == target)
			return ((char *)s);
		s++;
	}
	if (target == '\0')
		return ((char *)s);
	return (NULL);
}
