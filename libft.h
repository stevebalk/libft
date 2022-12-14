/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbalk <sbalk@student.fr>                   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 18:04:27 by sbalk             #+#    #+#             */
/*   Updated: 2022/12/14 15:05:30 by sbalk            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

#include <stdlib.h>
#include <limits.h>

int		ft_atoi(char *str);
void	ft_bzero(void *s, size_t size);
void	*ft_calloc(size_t count, size_t size);
int		ft_isalnum(unsigned char ch);
int		ft_alpha(unsigned char ch);
int		ft_isascii(unsigned char ch);
int		ft_idigit(unsigned char ch);
int		ft_isprint(unsigned char ch);
int		ft_strlen(char *str);
int		ft_tolower(char ch);
int		ft_toupper(char ch);

#endif