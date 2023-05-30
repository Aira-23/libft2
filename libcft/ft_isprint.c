/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aindiaz <aindiaz@student.42urduliz>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 15:02:24 by aindiaz           #+#    #+#             */
/*   Updated: 2022/12/12 17:23:39 by aindiaz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isprint(int c)
{
	if (c <= 126 && c >= 32)
	{
		return (1);
	}
	return (0);
}
/*
#include <stdio.h>

int	main (void)
{
	int	c;
	c = 'n';

	printf("%d", ft_isprint(c));
	return (0);
}*/
