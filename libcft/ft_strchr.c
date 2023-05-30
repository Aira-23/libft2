/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aindiaz <aindiaz@student.42urduliz>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 14:57:51 by aindiaz           #+#    #+#             */
/*   Updated: 2022/12/15 15:40:48 by aindiaz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strchr(const char *s, int c)
{
	while (*s)
	{
		if (*s == (char) c)
		{
			return ((char *)s);
		}
		s++;
	}
	if (*s == (char) c)
	{
		return ((char *)s);
	}
	return (0);
}
/*
#include <stdio.h>

int	main(void)
{
	const char	s[] = "Hello";
	int			c;

	c = 'l';
	printf("%s", ft_strchr(s, c));
	return(0);
}*/
