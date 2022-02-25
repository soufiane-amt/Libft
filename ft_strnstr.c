/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samajat <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 12:58:05 by samajat           #+#    #+#             */
/*   Updated: 2021/11/12 04:33:08 by samajat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(char const *haystack, char const *needle, size_t len)
{
	size_t	ne_size;
	size_t	i;

	if ((ft_strlen(needle) > ft_strlen(haystack)))
		return (0);
	if (!ft_strlen(needle) || (*haystack == *needle && ft_strlen(needle) == 1))
		return ((char *)haystack);
	ne_size = 0;
	i = -1;
	if (!len)
		return (NULL);
	while (needle[ne_size])
		ne_size++;
	while (haystack[++i] && i < len - 1)
		if (ft_strncmp(&haystack[i], needle, ne_size) == 0)
			return ((char *)haystack + i);
	return (NULL);
}
// #include <string.h>
// #include <stdio.h>
// int main ()
// {
// 	printf ("Expected:%s\nResult:%s",
// 	strnstr("aaabcabcd" , "a" , 1) , ft_strnstr("aaabcabcd" , "abc" ,1));
// }
