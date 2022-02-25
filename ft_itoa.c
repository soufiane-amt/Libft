/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samajat <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 10:54:32 by samajat           #+#    #+#             */
/*   Updated: 2021/11/16 08:18:03 by samajat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	len(int n)
{
	int	f_n;
	int	i;

	i = 0;
	f_n = n;
	while (f_n)
	{
		f_n = f_n / 10;
		i++;
	}
	return (i);
}

static char	*fill(int n, int j, int sign, char *s)
{
	int	size;

	size = j;
	if (n == -2147483648)
		ft_strlcpy(s, "-2147483648", 12);
	if (!n)
	{
		s[0] = '0';
		s[1] = 0;
		return (s);
	}
	while (n && n != -2147483648)
	{
		j--;
		s[j] = n % 10 + '0';
		n = n / 10;
	}
	if (sign)
		s[0] = '-';
	s[size] = 0;
	return (s);
}

char	*ft_itoa(int n)
{
	int		sign;
	int		i;
	char	*str;
	int		j;

	i = 0;
	sign = 0;
	if (n < 0)
	{
		sign = 1;
		n *= -1;
	}
	if (n != 0)
		i = len(n);
	else
		i++;
	j = i + sign;
	str = (char *) malloc (sizeof(char) * (j + 1));
	if (!str)
		return (NULL);
	str = fill(n, j, sign, str);
	return (str);
}

// int main ()
// {
//     printf("%s",ft_itoa(-2147483648));
//}
