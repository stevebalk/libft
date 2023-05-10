/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strrchr.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbalk <sbalk@student.fr>                   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 14:18:33 by sbalk             #+#    #+#             */
/*   Updated: 2023/05/04 15:59:59 by sbalk            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	const char	*latest;

	latest = NULL;
	while (*s)
	{
		if (*s == c)
			latest = s;
		s++;
	}
	if (c == '\0')
		return ((char *) s);
	return ((char *) latest);
}
