/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samajat <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 10:25:14 by samajat           #+#    #+#             */
/*   Updated: 2021/11/16 08:27:47 by samajat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substr;
	size_t	i;
	size_t	j;

	i = -1;
	j = 0;
	if (len > ft_strlen(s) + 1)
		len = ft_strlen(s);
	substr = (char *) malloc (sizeof(char) * (len + 1));
	if (!substr)
		return (NULL);
	while (s[++i])
	{
		if (i >= start && j < len)
		{
			substr[j] = s[i];
			j++;
		}
	}
	substr[j] = 0;
	return (substr);
}

// #include <stdio.h>
// int main ()
// {
// 	char *s;
// 	s = ft_substr("tripouille!" , 0 , 42000);
// 	printf("%s  size is :%zu",s , ft_strlen(s));
// }
