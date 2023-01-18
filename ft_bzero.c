/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsernicl <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 13:39:32 by dsernicl          #+#    #+#             */
/*   Updated: 2022/10/11 17:12:04 by dsernicl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_bzero(void *str, size_t len)
{
	size_t		i;
	char		*switchchar;

	switchchar = (char *) str;
	i = 0;
	while (i < len)
	{	
		if (switchchar[i] != 0)
		{	
			switchchar[i] = 0;
			++i;
		}
		else
			++i;
	}
	return (switchchar);
}
