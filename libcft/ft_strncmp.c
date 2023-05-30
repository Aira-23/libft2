/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aindiaz <aindiaz@student.42urduliz>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 18:23:32 by aindiaz           #+#    #+#             */
/*   Updated: 2022/12/17 16:04:49 by aindiaz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	
	if (n == 0)
		return (0);
	while (i < n)
	{
		if (s1[i] != s2[i] || s1[i] == '\0' || s2[i] == '\0')
		{
			return ((unsigned const char)s1[i] - (unsigned const char)s2[i]);
		}
		i++;
	}
	return (0);
}
/*
#include <stdio.h>

int	main(void)
{
	printf("%d", ft_strncmp("Helle", "Hello", 6));
	return (0);
}*/
