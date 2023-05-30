/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aindiaz <aindiaz@student.42urduliz>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 16:17:47 by aindiaz           #+#    #+#             */
/*   Updated: 2022/12/14 12:57:06 by aindiaz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char		*dest;
	const char	*st;

	if (dst == NULL || src == NULL)
		return NULL;

	dest = (unsigned char *)dst;
	st = (unsigned char *)src;

	while (n--)
		*dest++ = *st++;

	return (dst);
}
