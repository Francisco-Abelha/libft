/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgoncal2 <fgoncal2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/24 20:31:55 by fgoncal2          #+#    #+#             */
/*   Updated: 2025/10/24 20:38:57 by fgoncal2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substr;
	size_t	i;

	i = 0;
	substr = malloc(len * sizeof(char) + 1);
	if (!substr)
		return (NULL);
	while (i < len)
	{
		substr[i] = s[i + (size_t)start];
		i++;
	}
	substr[i] = '\0';
	return (substr);
}
