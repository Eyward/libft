/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zzirh <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 20:52:49 by zzirh             #+#    #+#             */
/*   Updated: 2021/11/06 16:14:58 by zzirh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char	*a;
	unsigned char	*b;
	unsigned int	i;

	a = (unsigned char *)src;
	b = (unsigned char *)dst;
	i = 0;
	if (a == NULL && b == NULL)
		return (NULL);
	while (i < n)
	{
		b[i] = a[i];
		i++;
	}
	return (dst);
}
/*
#include <stdio.h>
int	main()
{
	const char src[10] = "";
	char dest[10] = "aloo";
	puts(src);
	ft_memcpy(dest,src,3);
	puts(dest);
	memcpy(dest,src,3);
	puts(dest);
	return (0);
}*/
