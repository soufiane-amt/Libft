/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samajat <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 14:30:02 by samajat           #+#    #+#             */
/*   Updated: 2021/11/12 04:34:37 by samajat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
char	*ft_strrchr(const char *str, int c)
{
	int		i;
	char	*pstr;
	char	*f_str;

	if (!*str)
		return (0);
	i = 0;
	f_str = (char *)str;
	while (*(f_str + i))
	{
		if (*(f_str + i) == (char) c)
			pstr = f_str + i;
		i++;
	}
	if (*(f_str + i) == (char) c)
		pstr = f_str + i;
	return (pstr);
}
/*
#include <stdio.h>
#include <string.h>
int main ()
{
	char *p;
	char name []= "saoufiane";
	p = ft_strrchr(name , '\0');
	printf("%s\n",p);
	p = strrchr(name , '\0');
    printf("%s",p);
}*/
