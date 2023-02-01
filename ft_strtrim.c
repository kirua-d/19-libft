/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsernicl <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 11:29:20 by dsernicl          #+#    #+#             */
/*   Updated: 2023/01/18 11:29:25 by dsernicl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_checktrimm(char c, char const *set)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (c == set[i])
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*newchaine;
	int		i;
	int		fin;

	fin = ft_strlen(s1) - 1;
	i = 0;
	while (ft_checktrimm(s1[i], set) == 1)
			i++;
	if (i - 1 == fin)
	{
		newchaine = malloc(sizeof(char));
		if (!newchaine)
			return (NULL);
		newchaine[0] = '\0';
		return (newchaine);
	}
	while (ft_checktrimm(s1[fin], set) == 1)
		fin--;
	newchaine = ft_substr(s1, i, fin - i +1);
	if (!newchaine)
		return (NULL);
	return (newchaine);
}
