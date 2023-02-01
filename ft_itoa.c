/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsernicl <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 16:32:47 by dsernicl          #+#    #+#             */
/*   Updated: 2023/01/18 16:32:50 by dsernicl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	ft_intlen(long int n)
{
	int	i;

	i = 0;
	if (n == 0)
		return (1);
	if (n < 0)
	{
		n = -1 * n;
		i++;
	}
	while (n != 0)
	{
		n = n / 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	char		*integer;
	long int	nbr;
	int			len;

	nbr = n;
	len = ft_intlen(nbr);
	integer = malloc((len + 1) * sizeof(char));
	if (!integer)
		return (NULL);
	integer[len--] = '\0';
	if (nbr == 0)
		integer[0] = '0';
	if (nbr < 0)
	{	
		nbr = -1 * nbr;
		integer[0] = '-';
	}
	while (nbr > 0)
	{
		integer[len--] = (nbr % 10) + 48;
		nbr /= 10;
	}
	return (integer);
}
