/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: friendlyrobot <friendlyrobot@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 17:38:48 by sbalk             #+#    #+#             */
/*   Updated: 2022/12/17 14:50:01 by friendlyrob      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

void	*memchr(const void *s, int c, size_t n)
{
	unsigned char	*src;
	unsigned char	*ch;
	unsigned int	i;
	unsigned int	j;

	src = (unsigned char)s;
	ch = (unsigned char)c;
	i = 0;
	j = 0;
	while (n > 0)
	{
		if (src[i] == ch[0])
		{
			while(j < sizeof(int))
			{
				if (src[i + j] != ch[j])
				{
					break;
				}
				j++;
			}
			if (j == sizeof(int))
			{
				s = src + i;
				return (s);
			}
			j = 0;
		}
		n--;
	}
	return (NULL);
}
