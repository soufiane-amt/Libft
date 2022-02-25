/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samajat <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 21:53:05 by samajat           #+#    #+#             */
/*   Updated: 2021/11/12 03:17:02 by samajat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	char	*ps;
	int		i;

	i = 0;
	ps = (char *) malloc(size * nmemb);
	if (!ps)
		return (NULL);
	ft_bzero(ps, nmemb * size);
	return (ps);
}
