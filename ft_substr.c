/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsernicl <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 12:19:22 by dsernicl          #+#    #+#             */
/*   Updated: 2023/01/13 12:19:26 by dsernicl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"

char *ft_substr(char const *s, unsigned int start, size_t len)
{
    char *newChaine;
    int  i;

    i = 0;
    newChaine = malloc((1 + len) * sizeof(char));
    if (!newChaine)
        return (NULL);
    if (start > (unsigned int)ft_strlen(s))
	{
		newChaine[0] = '\0';
		return (newChaine);
	}
    while (len != 0)
    {
        newChaine[i] = s[start];
        start++;
        len--;
        i++;
    }
    newChaine[i] = '\0';
    return (newChaine);
    
}