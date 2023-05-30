/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aindiaz <aindiaz@student.42urduliz>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 12:38:42 by aindiaz           #+#    #+#             */
/*   Updated: 2022/12/12 17:47:47 by aindiaz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
    char *result;
    size_t length;
    size_t i;

    if (!s || !f)
        return (NULL);

    length = ft_strlen(s);
    result = (char *)malloc(sizeof(char) * (length + 1));
    if (!result)
        return (NULL);

    i = 0;
    while (i < length)
    {
        result[i] = f(i, s[i]);
        i++;
    }
    result[i] = '\0';

    return (result);
}

