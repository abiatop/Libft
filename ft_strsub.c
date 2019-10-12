/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbukhval <vbukhval@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/08 10:34:13 by vbukhval          #+#    #+#             */
/*   Updated: 2019/10/11 16:26:16 by vbukhval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*result;

	if (s == NULL)
		return (NULL);
	if (start > ft_strlen(s))
		return (NULL);
	result = ft_memalloc(len + 1);
	if (result == NULL)
		return (NULL);
	result = ft_strncpy(result, (char*)s + start, len);
	return (result);
}
