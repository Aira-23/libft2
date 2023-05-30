/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aindiaz <aindiaz@student.42urduliz>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 14:39:25 by aindiaz           #+#    #+#             */
/*   Updated: 2022/12/12 17:17:01 by aindiaz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isascii(int c)
{
	if (c <= 127 && c >= 0)
	{
		return (1);
	}
	return (0);
}
/*
#include <stdio.h>c

int	main (void)
{
	char	c;
	c = 0x82;

	printf("%d", ft_isascii(c));
	return (0);
}*/
