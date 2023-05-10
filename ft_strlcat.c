/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbalk <sbalk@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/27 16:17:34 by sbalk             #+#    #+#             */
/*   Updated: 2023/05/06 13:12:19 by sbalk            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	const char	*odst;
	size_t		n;

	odst = dst;
	n = size;
	while (n != 0 && *dst != '\0')
	{
		dst++;
		n--;
	}
	if (n-- == 0)
		return (size + ft_strlen(src));
	while (*src != '\0')
	{
		if (n != 0)
		{
			*dst = *src;
			n--;
		}
		dst++;
		src++;
	}
	*dst = '\0';
	return ((dst - odst));
}
