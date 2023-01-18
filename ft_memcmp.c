/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsernicl <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 14:55:23 by dsernicl          #+#    #+#             */
/*   Updated: 2022/10/24 14:16:26 by dsernicl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	int				j;
	unsigned char	*pointeur1;
	unsigned char	*pointeur2;

	pointeur1 = (unsigned char *) s1;
	pointeur2 = (unsigned char *) s2;
	i = 0;
	if (n == 0)
		return (0);
	while (n != 1 && pointeur1[i] == pointeur2[i])
	{
		i++;
		n--;
	}
	j = pointeur1[i] - pointeur2[i];
	return (j);
}
/*#include <stdio.h>
int	main()
{
	printf("%d %d", ft_memcmp("lalalo", "lalela", 6),memcmp("lalalo", "lalela", 6));
}*/
