/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgoncal2 <fgoncal2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/23 15:40:15 by fgoncal2          #+#    #+#             */
/*   Updated: 2025/11/04 01:31:35 by fgoncal2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	needleLen;

	i = 0;
	needleLen = ft_strlen(little);
	while (*big && i < len)
	{
		if (!(ft_strncmp(big, little, needleLen)))
			return ((char *)big);
		big++;
		i++;
	}
	return (NULL);
}
