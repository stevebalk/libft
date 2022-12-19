/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbalk <sbalk@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 17:11:46 by sbalk             #+#    #+#             */
/*   Updated: 2022/12/19 14:40:08 by sbalk            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memcpy(void *dest, const void *src, size_t n)
{
	char		*d;
	const char	*s;

	if ((dest == src) || n == 0)
		return (dest);
	if (!dest && !src)
		return (NULL);
	d = (char *)dest;
	s = (const char *)src;

	while (n-- > 0)
	{
		d[n] = s[n];
	}
	return (dest);
}
