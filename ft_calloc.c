/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbalk <sbalk@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 17:04:56 by sbalk             #+#    #+#             */
/*   Updated: 2023/05/15 15:56:01 by sbalk            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Overflow secured
void	*ft_calloc(size_t count, size_t size)
{
	void	*p;
	
	if (size != 0)
	{
		if (count > UINT_MAX / size)
			return (NULL);
	}
	p = (void*)malloc(count * size);
	if (p == NULL)
		return (NULL);
	ft_bzero(p, count * size);
	return (p);
}
