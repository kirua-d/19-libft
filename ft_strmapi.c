/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsernicl <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 16:24:05 by dsernicl          #+#    #+#             */
/*   Updated: 2023/01/19 16:24:08 by dsernicl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strmapi(char const *s, char (*f) (unsigned int, char))
{
	char	*chain;
	size_t	i;

	if (!s || !f)
		return (NULL);
	chain = malloc((ft_strlen(s) + 1) * sizeof(char));
	if (!chain)
		return (NULL);
	i = 0;
	while (s[i] != '\0')
	{
		chain[i] = f (i, s[i]);
		i++; 
	}
	chain[i] = '\0';
	return (chain);
}
