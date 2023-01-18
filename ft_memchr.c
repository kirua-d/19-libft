/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsernicl <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 14:24:37 by dsernicl          #+#    #+#             */
/*   Updated: 2022/10/24 13:09:03 by dsernicl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(void *s, int c, size_t n)
{
	int				i;
	unsigned char	*pointeur;

	i = 0;
	pointeur = (unsigned char *) s;
	while (n != 0)
	{
		if (pointeur[i] == (unsigned char) c)
		{
			return (&pointeur[i]);
		}
		i++;
		n--;
	}
	return (NULL);
}
