/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aindiaz <aindiaz@student.42urduliz>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 15:47:57 by aindiaz           #+#    #+#             */
/*   Updated: 2022/12/13 15:22:52 by aindiaz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	i;
	int	sym;
	int	nb;

	i = 0;
	sym = 1;
	nb = 0;
	while ((str[i] >= '\t' && str[i] <= '\r') || str[i] == 32)
		i++;
	while ((str[i] == '-' || str[i] == '+') && str[i])
	{
		if (str[i] == '-')
			sym = sym * -1;
		i++;
		if (str[i] == '-' || str[i] == '+')
			return (0);
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		nb = (nb * 10) + (str[i] - '0');
		i++;
	}
	return (nb * sym);
}
