/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aindiaz <aindiaz@student.42urduliz>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/01 12:33:41 by aindiaz           #+#    #+#             */
/*   Updated: 2023/01/11 14:07:10 by aindiaz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t			i;
	unsigned int	len;

	len = ft_strlen(src);
	i = 0;
	if (!size)
	{
		return (len);
	}
	while (src[i] && i < size - 1)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (len);
}
/*
#include <stdio.h>
int	main(void)
{
	char			dest[13];
	const char		src[] = "Hola";
	size_t			size;

	size = 7;
	ft_strlcpy(dest, src, size);
	printf("%s", dest);
	printf("%s", strlcpy(dest, src, size));
	return(0);
}*/
