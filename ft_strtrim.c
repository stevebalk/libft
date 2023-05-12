/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbalk <sbalk@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 15:57:03 by sbalk             #+#    #+#             */
/*   Updated: 2023/05/12 15:52:24 by sbalk            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// char	*ft_strtrim(char const *s1, char const *set)
// {
// 	size_t	s1_len;
// 	size_t	set_len;
// 	char	*trimmed_str;

// 	s1_len = ft_strlen(s1);
// 	set_len = ft_strlen(set);
// 	while (s1_len > 0)
// 	{
// 		if (ft_strncmp(s1 + s1_len - set_len, set, set_len) != 0)
// 			break ;
// 		s1_len -= set_len;
// 	}
// 	while (s1_len > 0)
// 	{
// 		if (ft_strncmp(s1, set, set_len) != 0)
// 			break ;
// 		s1 += set_len;
// 		s1_len -= set_len;
// 	}
// 	trimmed_str = malloc((s1_len + 1) * sizeof(char));
// 	if (trimmed_str == NULL)
// 		return (NULL);
// 	ft_strlcpy(trimmed_str, s1, s1_len + 1);
// 	return (trimmed_str);
// }

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	s1_len;
	size_t	set_len;
	char	*trimmed_str;
	size_t	i;

	s1_len = ft_strlen(s1);
	set_len = ft_strlen(set);
	i = 0;
	while(*s1 && i < set_len)
	{
		if (*s1 == set[i])
		{
			s1++;
			i = 0;
			s1_len--;
		}
		else
			i++;
	}
	i = 0;
	while (s1_len > 0 && i < set_len)
	{
		if (*(s1 + s1_len - 1) == set[i])
		{
			s1_len--;
			i = 0;
		}
		else
			i++;
	}
	trimmed_str = malloc((s1_len + 1) * sizeof(char));
	if (trimmed_str == NULL)
		return (NULL);
	ft_strlcpy(trimmed_str, s1, s1_len + 1);
	return (trimmed_str);
}