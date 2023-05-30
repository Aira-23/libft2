/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aindiaz <aindiaz@student.42urduliz>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/17 16:23:01 by aindiaz           #+#    #+#             */
/*   Updated: 2022/12/20 14:52:17 by aindiaz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;

	i = 0;
	if (s == NULL)
		return (NULL);
	while (i < n)
	{
		if (((unsigned char *) s)[i] == ((unsigned char) c))
		{
			return ((unsigned char *) s + i);
		}
		i++;
	}
	return (NULL);
}
/*
#include <stdio.h>

int	main(void)
{
	printf("%s", ft_memchr("Hola", 'l', 5));
	return (0);
}*/
