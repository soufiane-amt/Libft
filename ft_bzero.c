/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samajat <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 11:17:34 by samajat           #+#    #+#             */
/*   Updated: 2021/11/12 03:12:05 by samajat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	char	*str;

	str = (char *)s;
	n++;
	while (--n > 0)
		*(str++) = 0;
}
/*
#include<stdio.h>
int main()
{
    char name [] = "soufiane";
    ft_bzero(name, 7);
    printf("%s" , name);

    return 0;
}
*/
