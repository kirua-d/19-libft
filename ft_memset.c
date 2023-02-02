/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsernicl <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 11:51:56 by dsernicl          #+#    #+#             */
/*   Updated: 2022/10/11 15:19:19 by dsernicl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memset(void *str, int c, size_t len)
{
	size_t		i;
	char		*switchchar;

	switchchar = (char *) str;
	i = 0;
	while (i < len)
	{
		switchchar[i] = c;
		++i;
	}
	return (str);
}
