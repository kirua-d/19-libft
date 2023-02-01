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

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*newchaine;
	size_t	i;

	if (!s)
		return (NULL);
	if (ft_strlen(s) < len)
		len = ft_strlen(s);
	i = 0;
	newchaine = malloc((1 + len) * sizeof(char));
	if (!newchaine)
		return (NULL);
	if (start > (unsigned int)ft_strlen(s))
	{
		newchaine[0] = '\0';
		return (newchaine);
	}
	while (s[start] && (len > i))
	{
		newchaine[i] = s[start];
		start++;
		i++;
	}
	newchaine[i] = '\0';
	return (newchaine);
}
