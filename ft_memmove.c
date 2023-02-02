/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsernicl <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 16:32:30 by dsernicl          #+#    #+#             */
/*   Updated: 2022/10/15 15:21:01 by dsernicl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t			i;

	if (!dst && !src)
		return (dst);
	i = 0;
	if ((unsigned char *)dst < (unsigned char *)src)
	{
		while (i < len)
		{
			((unsigned char *)dst)[i] = ((unsigned char *)src)[i];
			i++;
		}
	}
	else
		while (len--)
			((unsigned char *)dst)[len] = ((unsigned char *)src)[len];
	return (dst);
}

/*#include <stdio.h>

int main(void)
{
	char	src[11] = "salut daoud";
	char	dest[25] = "bonjour";
	int		len = 10;

	printf("%s\n", ft_memmove(dest, src, len));

}*/