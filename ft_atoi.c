/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsernicl <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 11:51:12 by dsernicl          #+#    #+#             */
/*   Updated: 2023/01/11 14:38:50 by dsernicl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(char *str)
{
	int	i;
	int	j;
	int	signe;

	signe = 1;
	i = 0;
	j = 0;
	while (str[i] == 32 || (9 <= str[i] && str[i] <= 13))
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			signe = -1;
		i++;
	}
	while (str[i] != '\0' && 48 <= str[i] && str[i] <= 57)
	{
		j = j * 10 + str[i++] - 48;
		if (j * signe < INT_MIN)
			return (0);
		if (j * signe > INT_MAX)
			return (-1);
	}
	j = j * signe;
	return (j);
}

/*

#include <stdio.h>
int	main ()
{
	printf("%d %d", ft_atoi("123e56"), atoi("123e56") );
}

*/
