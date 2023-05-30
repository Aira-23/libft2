/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aindiaz <aindiaz@student.42urduliz>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/21 11:48:51 by aindiaz           #+#    #+#             */
/*   Updated: 2022/12/21 12:42:10 by aindiaz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if (((unsigned char *) s1)[i] != ((unsigned char *) s2)[i])
		{
			return (((unsigned char *) s1)[i] - ((unsigned char *) s2)[i]);
		}
		i++;
	}
	return (0);
}
/*
#include <stdio.h>
int main(void)
{
	printf("%d", ft_memcmp("Hello", "Helle", 5));
	return (0);
}*/
