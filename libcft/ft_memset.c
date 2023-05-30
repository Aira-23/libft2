/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aindiaz <aindiaz@student.42urduliz>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 16:17:47 by aindiaz           #+#    #+#             */
/*   Updated: 2022/12/14 12:57:06 by aindiaz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *str, int c, size_t n)
{
	size_t	i;
	char	*st;

	st = str;
	i = 0;
	while (i < n)
	{
		st[i] = c;
		i++;
	}
	return (str);
}
/*
#include <stdio.h>

int	main(void)
{
	char	str[] = "Hola mundo";
	int		c;
	size_t	n;

	c = '$';
	n = 3;
	puts(str);
	return (0);
}*/
