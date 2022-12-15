/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbalk <sbalk@student.fr>                   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 18:04:27 by sbalk             #+#    #+#             */
/*   Updated: 2022/12/15 17:25:17 by sbalk            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include	<stdlib.h>
# include	<limits.h>
# include	<stdio.h>

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
char	*ft_substr(char const *s, unsigned int start, size_t len);
char	*ft_strjoin(char const *s1, char const *s2);
char	*ft_strtrim(char const *s1, char const *set);
char	**ft_split(char const *s, char c);
char	*ft_itoa(int n);
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));
void	ft_striteri(char *s, void (*f)(unsigned int, char*));
void	ft_putchar_fd(char c, int fd);
void	ft_putstr_fd(char *s, int fd);
void	ft_putendl_fd(char *s, int fd);
void	ft_putnbr_fd(int n, int fd);
void	*ft_memcpy(void *dest, const void *src, size_t n);
char	*ft_strdup(const char *s);

#endif
