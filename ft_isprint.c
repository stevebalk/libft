/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: friendlyrobot <friendlyrobot@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 16:43:56 by sbalk             #+#    #+#             */
/*   Updated: 2022/12/17 15:01:17 by friendlyrob      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isprint(unsigned char ch)
{
	return (ch >= 32 && ch <= 126);
}
