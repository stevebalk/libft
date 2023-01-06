/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbalk <sbalk@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/27 16:17:34 by sbalk             #+#    #+#             */
/*   Updated: 2023/01/05 13:31:08 by sbalk            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	dst_length;
	size_t	i;

	dst_length = ft_strlen(dst);
	if (dst_length >= size - 1)
		return (0);
	i = 0;
	while (src[i] != '\0' && dst_length + i < size)
	{
		dst[dst_length + 1 + i] = src[i];
		i++;
	}
	dst[dst_length + 1 + i] = '\0';
	return (dst_length + i);
}
