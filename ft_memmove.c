/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbalk <sbalk@student.fr>                   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/16 14:43:15 by sbalk             #+#    #+#             */
/*   Updated: 2023/01/06 13:57:57 by sbalk            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char		*d;
	const char	*s;
	int			i;

	d = (unsigned char *)dest;
	s = (unsigned char *)src;
	i = 0;
	if (d < s)
		while (i++ < n)
			*d++ = *s++;
	else
	{
		d += (n - 1);
		s += (n - 1);
		while (n-- > 0)
			*d-- = *s--;
	}
	return (dest);
}
