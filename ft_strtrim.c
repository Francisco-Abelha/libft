/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgoncal2 <fgoncal2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/24 22:55:22 by fgoncal2          #+#    #+#             */
/*   Updated: 2025/10/25 00:33:53 by fgoncal2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	isInSet(const char *set, char c)
{
	while (*set)
	{
		if (*set == c)
			return (1);
		set++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*trimmed;
	char	*src;
	size_t	len;

	src = (char *)s1;
	len = ft_strlen(src);
	trimmed = malloc(len * sizeof(char *) + 1);
	if (!trimmed)
		return (NULL);
	while (*src)
	{
		if (!(isInSet(set, *src)))
		{
			printf("went: ");
			*trimmed = *src;
			printf("%c\n", *trimmed);
			trimmed++;
		}
		src++;
		printf("%s\n", trimmed);
	}
	printf("%s\n", trimmed);
	*trimmed = '\0';
	printf("%s\n", trimmed);
	return (trimmed);
}
