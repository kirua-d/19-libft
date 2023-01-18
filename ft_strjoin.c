/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsernicl <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 10:56:31 by dsernicl          #+#    #+#             */
/*   Updated: 2023/01/18 10:56:35 by dsernicl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strjoin(char const *s1, char const *s2)
{
    char    *newChaine;
    int     i;
    int     j;

    newChaine = malloc ((ft_strlen(s1) + ft_strlen(s2) + 1) * sizeof(char));
    if (!newChaine)
        return (NULL);
    i = 0;
    while (s1[i] != '\0')
    {
        newChaine[i] = s1[i];
        i++;
    }
    j = 0;
    while (s2[j] != '\0')
    {
        newChaine[i] = s2[j];
        j++;
        i++;
    }
    newChaine[i] = '\0';
    return (newChaine);
}