/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbukhval <vbukhval@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/25 20:49:54 by vbukhval          #+#    #+#             */
/*   Updated: 2019/10/11 13:44:10 by vbukhval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int				f;
	long long int	res;

	res = 0;
	while (*str == ' ' || *str == '\t' || *str == '\n'
			|| *str == '\v' || *str == '\f' || *str == '\r')
		str++;
	if (*str == '+' || *str == '-')
	{
		if (*str == '-')
			f = -1;
		str++;
		if (!(*str <= '9' && *str >= '0') && *str != '-')
			return (0);
	}
	while (*str <= '9' && *str >= '0')
	{
		res = res * 10 + *str - 48;
		str++;
		if (res > 2147483648 && f == 1)
			return (-1);
		else if (res > 2147483648 && f == -1)
			return (0);
	}
	return (f == -1 ? -res : res);
}
