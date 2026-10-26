/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpoh <jpoh@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/23 16:13:35 by jpoh              #+#    #+#             */
/*   Updated: 2026/09/23 17:29:18 by jpoh             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h" //memcopy but improved for backwards copying

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char		*d;
	const unsigned char	*s;

	d = (unsigned char *)dst;
	s = (const unsigned char *)src;
	if (!dst || !src)
		return (NULL);
	if (len == 0 || d == s)
		return (d);
	if (d < s)
		ft_memcpy(dst, src, len);
	if (s < d)
	{
		while (len-- > 0)
			d[len] = s[len];
	}
	return (d);
}
