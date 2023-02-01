/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsernicl <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 13:55:48 by dsernicl          #+#    #+#             */
/*   Updated: 2022/10/13 15:32:51 by dsernicl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *restrict dst, void *restrict src, size_t n)
{
	char	*src_bis;
	char	*dst_bis;
	size_t	i;

	src_bis = (char *) src;
	dst_bis = (char *) dst;
	i = 0;
	if (dst == NULL && src == NULL)
		return (dst);
	while (i < n)
	{
		dst_bis[i] = src_bis[i];
		i++;
	}
	return (dst);
}
