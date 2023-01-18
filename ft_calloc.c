/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsernicl <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 15:31:35 by dsernicl          #+#    #+#             */
/*   Updated: 2023/01/12 15:44:10 by dsernicl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    *ft_calloc(size_t count, size_t size)
{
    char    *hope;
    int     value;

    hope = malloc(count * size);
    if (!hope)
        return (NULL);
    value = count * size;
    while (value--)
        hope[value] = '\0';
    return(hope);
}
