/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbalk <sbalk@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 15:29:20 by sbalk             #+#    #+#             */
/*   Updated: 2022/12/19 14:39:01 by sbalk            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	nb;
	int	sign;

	nb = 0;
	sign = 1;
	while (*str == '\f' || *str == '\n' || *str == '\r'
		|| *str == '\t' || *str == '\v' || *str == ' ')
	{
		str++;
	}
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
			sign = -1;
		str++;
	}
	while (*str >= '0' && *str <= '9' && *str != '\0')
	{
		nb *= 10;
		nb += *str - '0';
		str++;
	}
	return (nb * sign);
}

// #include <stdio.h>
// #include <limits.h>
// #include <stdlib.h>

// int	main(void)
// {
// 	// int min_i = INT_MIN;
// 	// int max_i = INT_MAX;
// 	// int zero = 0;
// 	char str[] = "    +451dasd56131";
// 	printf("%d\n", ft_atoi(str));
// 	printf("%d\n", atoi(str));
// }
