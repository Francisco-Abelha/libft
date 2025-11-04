/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgoncal2 <fgoncal2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 22:46:55 by fgoncal2          #+#    #+#             */
/*   Updated: 2025/11/04 00:23:43 by fgoncal2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	destLen;
	size_t	i;

	destLen = ft_strlen(dst);
	i = 0;
	if (size <= destLen)
		return (size + ft_strlen(src));
	while (src[i] && (i + destLen < size - 1))
	{
		dst[i + destLen] = src[i];
		i++;
	}
	dst[i + destLen] = '\0';
	return (destLen + ft_strlen(src));
}

