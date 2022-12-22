/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbalk <sbalk@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 17:38:48 by sbalk             #+#    #+#             */
/*   Updated: 2022/12/20 23:55:50 by sbalk            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*src;
	unsigned int		i;

	src = (unsigned char *)s;
	i = 0;
	while (i++ < n)
		if (src[i] == c)
			return ((void *)(src + i));
	return (NULL);
}
