/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgoncal2 <fgoncal2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/23 15:40:15 by fgoncal2          #+#    #+#             */
/*   Updated: 2025/10/24 00:26:10 by fgoncal2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	needleLen;

	i = 0;
	needleLen = ft_strlen(needle);
	while (*haystack && i < len)
	{
		if (!(ft_strncmp(haystack, needle, needleLen)))
			return ((char *)haystack);
		haystack++;
		i++;
	}
	return (NULL);
}
