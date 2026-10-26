/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpoh <jpoh@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/23 17:55:54 by jpoh              #+#    #+#             */
/*   Updated: 2026/09/23 20:42:47 by jpoh             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h" //create substr from a str

char	*ft_substr(char const *s, unsigned int index, size_t len)
{
	char	*substr;
	size_t	slen;
	size_t	i;

	if (!s)
		return (NULL);
	slen = ft_strlen(s);
	if (index >= slen)
		return (ft_strdup(""));
	if (len > slen - index)
		len = slen - index;
	substr = malloc(len + 1);
	if (!substr)
		return (NULL);
	i = 0;
	while (i < len)
	{
		substr[i] = s[index + i];
		i++;
	}
	substr[i] = '\0';
	return (substr);
}
