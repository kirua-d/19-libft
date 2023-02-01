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

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*newchaine;
	int		i;
	int		j;

	newchaine = malloc ((ft_strlen(s1) + ft_strlen(s2) + 1) * sizeof(char));
	if (!newchaine)
		return (NULL);
	i = 0;
	while (s1[i] != '\0')
	{
		newchaine[i] = s1[i];
		i++;
	}
	j = 0;
	while (s2[j] != '\0')
	{
		newchaine[i] = s2[j];
		j++;
		i++;
	}
	newchaine[i] = '\0';
	return (newchaine);
}
