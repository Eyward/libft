/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zzirh <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 18:16:20 by zzirh             #+#    #+#             */
/*   Updated: 2021/11/05 12:39:09 by zzirh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memset(void *ptr, int v, size_t c)
{
	unsigned char	*str;
	size_t			i;

	i = 0;
	str = (unsigned char *)ptr;
	while (i < c)
	{
		str[i] = (unsigned char)v;
		i++;
	}
	return (ptr);
}
/*int	main()
{
	char str[] = "this is memset";
 	puts(str);
	ft_memset(str, '$', 4);
	puts(str);
	return (0);	
} */
