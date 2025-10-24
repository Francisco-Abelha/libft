/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgoncal2 <fgoncal2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 21:05:11 by fgoncal2          #+#    #+#             */
/*   Updated: 2025/10/24 22:50:58 by fgoncal2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	len;
	size_t	ret;

	len = size;
	ret = ft_strlen(src);
	if (size > 0)
	{
		while (len - 1 > 0)
		{
			*dst = *src;
			len--;
			dst++;
			src++;
		}
		*dst = '\0';
	}
	return (ret);
}
