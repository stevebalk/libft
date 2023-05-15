/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbalk <sbalk@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/31 15:47:35 by sbalk             #+#    #+#             */
/*   Updated: 2023/05/15 19:00:26 by sbalk            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t		i;
	size_t		size_needle;
	char		*b;

	i = 0;
	size_needle = ft_strlen(needle);
	if (size_needle == 0)
		return ((char *) haystack);
	if (len == 0 || size_needle > ft_strlen(haystack))
		return (NULL);
	b = (char *) haystack;
	
	while (i < len - i)
	{
		if (ft_strncmp(b, needle, len - i) == 0)
			return (b);
		b++;
		i++;
	}
	return (NULL);
}
