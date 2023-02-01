/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsernicl <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 11:44:33 by dsernicl          #+#    #+#             */
/*   Updated: 2023/01/13 11:44:40 by dsernicl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	size_t	lengstr;
	char	*copy;
	int		i;

	i = 0;
	if (!s1)
		return (NULL);
	lengstr = ft_strlen(s1) +1;
	copy = malloc(lengstr * sizeof(char));
	if (!copy)
		return (NULL);
	while (lengstr != 1)
	{
		copy[i] = s1[i];
		lengstr--;
		i++;
	}
	copy[i] = '\0';
	return (copy);
}
