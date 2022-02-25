/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samajat <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 07:17:53 by samajat           #+#    #+#             */
/*   Updated: 2021/11/12 03:55:59 by samajat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char		*s_dst;
	const char	*s_src;
	int			i;

	i = 0;
	s_dst = (char *) dst;
	s_src = (const char *) src;
	n++;
	while (--n > 0)
	{
		s_dst[i] = s_src[i];
		i++;
	}
	return (dst);
}

// #include<stdio.h>
// #include<string.h>
// int main()
// {
// 	char  dest[3];
// 	char src[3] = {'a' , 'b',  'c'};
// 	ft_memcpy(dest , src , 6);
// 	printf("0 : %c\n",dest[0]);
// 	printf("1 : %c\n",dest[1]);

// }
