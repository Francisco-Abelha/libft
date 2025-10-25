/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgoncal2 <fgoncal2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/24 22:55:22 by fgoncal2          #+#    #+#             */
/*   Updated: 2025/10/25 19:33:37 by fgoncal2         ###   ########.fr       */
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
	size_t	len;
	size_t	start;
	size_t	end;
	size_t	i;

	len = ft_strlen(s1);
	i = 0;
	start = 0;
	end = len - 1;
	trimmed	= malloc(len + 1);
	if (!trimmed)
		return (NULL);
	while (s1[start] && (isInSet(set, s1[start])))
		start++;
	while (end > start && (isInSet(set, s1[end])))
		end--;
	while (start <= end)
		trimmed[i++] = s1[start++];
	return (trimmed);
}
