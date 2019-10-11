/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbukhval <vbukhval@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/30 14:11:31 by vbukhval          #+#    #+#             */
/*   Updated: 2019/10/11 13:18:01 by vbukhval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *str, int c, size_t n)
{
	unsigned char	*dst;

	dst = (unsigned char *)str;
	while (dst < (unsigned char *)str + n)
		*(dst++) = (unsigned char)c;
	return (str);
}
