/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbalk <sbalk@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/31 15:47:35 by sbalk             #+#    #+#             */
/*   Updated: 2023/05/12 17:08:11 by sbalk            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t		i;
	size_t		size_little;
	char		*b;

	i = 0;
	size_little = ft_strlen(little);
	if (size_little == 0 || big == little)
		return ((char *) big);
	if (len == 0 || size_little > ft_strlen(big))
		return (NULL);
	b = (char *) big;
	
	while (i < len - size_little)
	{
		if (*b == *little)
			if (ft_strncmp(b, little, size_little) == 0)
				return ((char *) big + i);
		b++;
		i++;
	}
	return (NULL);
}
