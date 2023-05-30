/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aindiaz <aindiaz@student.42urduliz>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/01 12:33:41 by aindiaz           #+#    #+#             */
/*   Updated: 2023/01/11 14:07:10 by aindiaz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t ft_strlcat(char *dst, const char *src, size_t size)
{
    size_t i;
    size_t j;
    size_t dst_len;
    size_t src_len;
    
    i = 0;
    j = 0;
    dst_len = ft_strlen(dst);
    src_len = ft_strlen(src);

    if (size <= dst_len)
        return size + src_len;

    while (dst[i] && i < size - 1 && size > 0)
        i++;

    while (src[j] && i < size - 1 && size > 0)
    {
        dst[i] = src[j];
        i++;
        j++;
    }

    dst[i] = '\0';

    return (dst_len + src_len);
}

