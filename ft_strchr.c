/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsernicl <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 17:02:37 by dsernicl          #+#    #+#             */
/*   Updated: 2022/10/24 16:47:06 by dsernicl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int		i;
	char	*pointeur;
	char	str;

	i = 0;
	str = c;
	while (s[i] != '\0')
	{
		if (s[i] == str)
		{
			pointeur = (char *) &s[i];
			return (pointeur);
		}
		i++;
	}
	if (s[i] == str)
	{
		pointeur = (char *) &s[i];
		return (pointeur);
	}
	return (NULL);
}

// int main()
// {
// 	const char *s = "teste";
// 	printf("%s %s",strchr(s, 'e') , ft_strchr(s, 'e'));
// }
