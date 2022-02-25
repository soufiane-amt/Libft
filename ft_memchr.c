/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samajat <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 11:27:20 by samajat           #+#    #+#             */
/*   Updated: 2021/11/12 03:49:15 by samajat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	char	*ps;

	ps = (char *)s;
	while (n)
	{
		if (*(ps) == (unsigned char)c)
			return (ps);
		ps++;
		n--;
	}
	return (NULL);
}
/*
#include<stdio.h>

int main()
{
    char name [] = "soufiane";

    printf("%s" ,ft_memchr(name , 'z' , 9));

    return 0;
}
*/
