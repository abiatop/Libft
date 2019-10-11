/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbukhval <vbukhval@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/02 19:50:41 by vbukhval          #+#    #+#             */
/*   Updated: 2019/10/11 11:51:59 by vbukhval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	const char		*ptr1;
	char			*ptr2;

	if (!dst && !src)
		return (NULL);
	ptr1 = (const char*)src;
	ptr2 = (char*)dst;
	while (n-- > 0)
		*(ptr2 + n) = *(ptr1 + n);
	return (ptr2);
}
