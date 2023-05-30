/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aindiaz <aindiaz@student.42urduliz>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 13:09:02 by aindiaz           #+#    #+#             */
/*   Updated: 2022/12/15 14:42:39 by aindiaz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*ptr;
	size_t	i;
	int	len;

	i = 0;
	len = ft_strlen(s1) + ft_strlen(s2) + 1;
	str = (char *) malloc (sizeof(char) * len);
	if (str == NULL)
	{
		return (NULL);
	}
	while (*s1)
	{
		ptr[i] = *s1++;
		i++;
	}
	while (*s2)
	{
		ptr[i] = *s2++;
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}
