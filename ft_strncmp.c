/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsernicl <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 17:13:54 by dsernicl          #+#    #+#             */
/*   Updated: 2023/01/11 14:45:18 by dsernicl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	int	i;
	int	j;

	i = 0;
	while (n != 0)
	{
		if ((unsigned char) s1[i] == (unsigned char) s2[i] && s1[i] != '\0')
		{
			i++;
			n--;
		}
		else
		{
			j = (unsigned char) s1[i] - (unsigned char) s2[i];
			return (j);
		}
	}
	return (0);
}
