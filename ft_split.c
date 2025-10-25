/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgoncal2 <fgoncal2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/25 20:32:07 by fgoncal2          #+#    #+#             */
/*   Updated: 2025/10/26 00:27:56 by fgoncal2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	countWords(char	const *s, char c)
{
	size_t	count;

	count = 0;
	while (*s)
	{
		while (*s && *s == c)
			s++;
		if (*s != '\0')
			count++;
		while (*s && *s != c)
			s++;
	}
	return (count);
}

static char	*copyWord(char const *s, char c)
{
	size_t	len;
	char	*word;

	len = 0;
	while (s[len] && s[len] != c)
		len++;
	word = malloc (len + 1);
	if (!word)
		return (NULL);
	ft_strlcpy(word, s, len + 1);
	return (word);
}

char	**ft_split(char const *s, char c)
{
	size_t	numWords;
	char	**array;
	char	**ptr;

	numWords = countWords(s, c);
	array = malloc((numWords + 1) * (sizeof(char *)));
	if (!array)
		return (NULL);
	ptr = array;
	while (*s)
	{
		while (*s && *s == c)
			s++;
		if (*s)
		{
			*ptr = copyWord(s, c);
			while (*s && *s != c)
				s++;
			ptr++;
		}
	}
	*ptr = NULL;
	return (array);
}
