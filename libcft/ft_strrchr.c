/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aindiaz <aindiaz@student.42urduliz>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 16:09:11 by aindiaz           #+#    #+#             */
/*   Updated: 2022/12/15 18:15:07 by aindiaz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{	
	int	count;

	count = ft_strlen(s);
	while (count)
	{	
		if (s[count] == (char) c)
		{
			return ((char *) s + count);
		}
		count--;
	}
	if (s[count] == (char) c)
	{
		return ((char *) s + count);
	}
	return (0);
}
/*
#include <stdio.h>

int	main(void)
{
	printf("%s", ft_strrchr("Hello", 'l'));
	return (0);
}*/
