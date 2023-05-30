/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aindiaz <aindiaz@student.42urduliz>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 15:20:23 by aindiaz           #+#    #+#             */
/*   Updated: 2023/01/11 15:08:25 by aindiaz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	size_t	len;
	char	*ptr;

	len = ft_strlen(s);
	ptr = malloc((len + 1) * sizeof(char));
	if (ptr == NULL)
	{
		return (NULL);
	}
	ft_memcpy(ptr, s, (len + 1) * sizeof(char));
	return (ptr);
}
