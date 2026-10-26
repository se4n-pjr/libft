/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpoh <jpoh@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/23 20:26:36 by jpoh              #+#    #+#             */
/*   Updated: 2026/09/30 21:18:16 by jpoh             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	countwords(char const *str, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (str[i])
	{
		while (str[i] && str[i] == c)
			i++;
		if (str[i])
			count++;
		while (str[i] && str[i] != c)
			i++;
	}
	return (count);
}

static char	*copyword(char const *str, char c)
{
	char	*dup;
	int		i;
	int		len;

	len = 0;
	while (str[len] && str[len] != c)
		len++;
	dup = malloc(sizeof(char) * (len + 1));
	if (!dup)
		return (NULL);
	i = 0;
	while (i < len)
	{
		dup[i] = str[i];
		i++;
	}
	dup[i] = '\0';
	return (dup);
}

static char	**free_all(char **result, int j)
{
	while (j > 0)
	{
		j--;
		free(result[j]);
	}
	free(result);
	return (NULL);
}

static char	**split(char **result, char const *str, char c)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (str[i])
	{
		while (str[i] && str[i] == c)
			i++;
		if (str[i])
		{
			result[j] = copyword(&str[i], c);
			if (!result[j])
				return (free_all(result, j));
			j++;
		}
		while (str[i] && str[i] != c)
			i++;
	}
	result[j] = NULL;
	return (result);
}

char	**ft_split(char const *str, char c)
{
	char	**result;

	if (!str)
		return (NULL);
	result = malloc(sizeof(char *) * (countwords(str, c) + 1));
	if (!result)
		return (NULL);
	return (split(result, str, c));
}
