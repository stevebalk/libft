/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbalk <sbalk@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 16:46:27 by sbalk             #+#    #+#             */
/*   Updated: 2022/12/22 14:56:27 by sbalk            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char *src1;
	unsigned char *src2;
    size_t        i;

	src1 = (unsigned char*)s1;
	src2 = (unsigned char*)s2;
    while (i < n)
    {
        if (src1[i] != src2[i])
            return (*src1 - *src2);
        i++;
    }
	return (0);
}
