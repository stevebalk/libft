/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbalk <sbalk@student.fr>                   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 15:58:32 by sbalk             #+#    #+#             */
/*   Updated: 2023/05/14 19:46:59 by sbalk            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_split(char const *s, char c)
{
	char	**list;
	char	*p;
	size_t	string_count;
	size_t	i;
	size_t	str_len;
	
	i = 0;
	str_len = 0;
	string_count = 0;
	while (s[i] != '\0')
	{
		while (s[i] == c)
			i++;
		if (s[i] != c && s[i] != '\0')
			string_count++;
		while (s[i] != c && s[i] != '\0')
			i++;
	}
	list = (char **)ft_calloc((string_count + 1), sizeof(char *));
	if (list == NULL)
		return (NULL);
	i = 0;
	while (i < string_count)
	{
		while (*s == c)
			s++;
		while (*s != c && *s != '\0')
		{
			str_len++;
			s++;
		}
		p = (char *) malloc((str_len + 1) * sizeof(char));
		if (p == NULL)
			return (NULL);
		ft_strlcpy(p, s - str_len, str_len + 1);
		list[i] = p;
		str_len = 0;
		i++;
	}
	return (list);
}
