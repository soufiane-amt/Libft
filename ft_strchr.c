/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samajat <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 13:46:59 by samajat           #+#    #+#             */
/*   Updated: 2021/11/12 04:17:50 by samajat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strchr(char const *str, int c)
{
	char	*f_str;

	f_str = (char *)str;
	while (*f_str && *f_str != (char)c)
		f_str++;
	if (*f_str == (char) c)
		return (f_str);
	return (0);
}
// #include <stdio.h>
// #include <string.h>
// int main ()
// {
// 	char *p;
// 	char name []= "soaufiane";
// 	p = ft_strchr(name , 'z');
// 		printf("%s\n",p);
// 	char *pp;
// 	char name1 []= "soaufiane";
// 	pp = strchr(name1 , 'z');
// 	printf("%s",pp);
// }
