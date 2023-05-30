/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aindiaz <aindiaz@student.42urduliz>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 12:38:42 by aindiaz           #+#    #+#             */
/*   Updated: 2022/12/12 17:47:47 by aindiaz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalnum(int c)
{
	if ((c <= 'z' && c >= 'a') || (c <= 'Z' && c >= 'A'))
	{
		return (1);
	}
	else if (c <= '9' && c >= '0')
	{
		return (1);
	}
	return (0);
}
/*
#include <stdio.h>

int	main(void)
{
	int	c;

	c = '%';
	printf("%d", ft_isalnum (c));
	return (0);
}*/
