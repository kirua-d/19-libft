/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsernicl <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 16:13:06 by dsernicl          #+#    #+#             */
/*   Updated: 2022/10/26 18:35:02 by dsernicl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	int		j;
	char	l;

	i = 0;
	j = 0;
	l = c;
	while (s[i] != '\0')
	{
		if (s[i] == l)
		{
			j = i;
		}
		i++;
	}
	if (j > 0 || s[0] == l)
		return ((char *) &s[j]);
	if (s[i] == '\0' && l == '\0')
		return ((char *)&s[i]);
	return (NULL);
}
