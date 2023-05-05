/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbalk <sbalk@student.fr>                   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 15:57:03 by sbalk             #+#    #+#             */
/*   Updated: 2023/05/04 13:39:45 by sbalk            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char const	*str;
	char		*trimmmed_str;
	size_t		i;
	size_t		set_len;
	size_t		string_len;

	str = s1;
	set_len = ft_strlen(set);
	string_len = ft_strlen(str);
	i = 0;
	while (s1[i] == set[i])
	{
		i++;
		if (i == set_len)
		{
			str += set_len;
			string_len -= set_len;
		}
	}
	i = 0;
	while (s1[ft_strlen(s1) - set_len + i] == set[i])
	{
		i++;
		if (i == set_len)
			string_len -= set_len;
	}
	trimmmed_str = malloc((string_len + 1) * sizeof(char));
	if (trimmmed_str == NULL)
		return (NULL);
	ft_strlcpy(trimmmed_str, str, string_len + 1);
	return (trimmmed_str);
}
