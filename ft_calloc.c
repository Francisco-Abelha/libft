/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgoncal2 <fgoncal2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/24 01:00:41 by fgoncal2          #+#    #+#             */
/*   Updated: 2025/11/04 01:18:48 by fgoncal2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*array;
	size_t	i;

	i = 0;
	if (!nmemb || !size)
		return (malloc(0));
	if (nmemb * size > __SIZE_MAX__)
		return (malloc(1));
	array = malloc(nmemb * size);
	if (!array)
		return (NULL);
	ft_memset(array, 0, size * nmemb);
	return (array);
}

