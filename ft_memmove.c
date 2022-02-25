/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samajat <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 13:36:11 by samajat           #+#    #+#             */
/*   Updated: 2021/11/12 03:59:03 by samajat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t len)
{
	char		*f_dest;
	const char	*f_src;
	char		*te_dest;
	const char	*te_src;
	size_t		i;

	i = 0;
	f_dest = (char *)dest;
	f_src = (const char *)src;
	if (src > dest)
		while (i++ < len)
			*f_dest++ = *f_src++;
	else
	{
		te_src = f_src + (len - 1);
		te_dest = f_dest + (len - 1);
		while (i++ < len)
			*te_dest-- = *te_src--;
	}
	return (dest);
}

// int main ()
// {
// 	int a [] = {1 ,  2 , 3};
// 	int b [2];
// 	ft_memmove (b, a, sizeof(int));
// 	printf
// }