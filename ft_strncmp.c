/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samajat <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 09:31:55 by samajat           #+#    #+#             */
/*   Updated: 2021/11/12 04:30:18 by samajat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *str1, const char *str2, size_t n)
{
	int	i;
	int	output;

	i = 0;
	output = 0;
	n++;
	while ((*(str1 + i) || *(str2 + i)) && --n > 0)
	{
		output = (unsigned char)*(str1 + i) - (unsigned char)*(str2 + i);
		if (output)
			return (output);
		i++;
	}
	return (output);
}
