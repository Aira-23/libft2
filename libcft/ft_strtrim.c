/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aindiaz <aindiaz@student.42urduliz>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/01 12:33:41 by aindiaz           #+#    #+#             */
/*   Updated: 2023/01/11 14:07:10 by aindiaz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	unsigned int	i;
	size_t		start;
	size_t		end;

	if (s1 == NULL || set == NULL)
		return (NULL);

	if (ft_strlen(s1) == 0)
		return (ft_strdup(""));

	if (ft_strlen(set) == 0)
		return (ft_strdup(s1));

	i = 0;
	while (s1[i] != '\0' && ft_strchr(set, s1[i]) != NULL)
		i++;

	start = i;
	end = ft_strlen(s1) - 1;

	while (end > start && ft_strchr(set, s1[end]) != NULL)
		end--;

	return (ft_substr(s1, start, end - start + 1));
}

