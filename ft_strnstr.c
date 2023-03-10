/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsernicl <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 17:50:25 by dsernicl          #+#    #+#             */
/*   Updated: 2023/01/11 14:57:33 by dsernicl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	int		i;
	size_t	size;

	i = 0;
	if (*needle == '\0')
		return ((char *) haystack);
	size = ft_strlen(needle);
	if (len < size)
		return (NULL);
	while (haystack[i] != needle[0] && haystack[i] != '\0' && len > size)
	{
		len--;
		i++;
	}	
	if (haystack[i] == needle[0] && ft_strncmp(&haystack[i], needle, size) == 0)
	{
		return ((char *)&haystack[i]);
	}
	return (NULL);
}
