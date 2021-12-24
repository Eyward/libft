/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zzirh <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 19:58:58 by zzirh             #+#    #+#             */
/*   Updated: 2021/11/17 21:20:01 by zzirh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *to_find, size_t len)
{
	size_t	i;
	int		j;
	char	*p;

	i = 0;
	p = 0;
	if (*to_find == 0)
		return ((char *)str);
	while (str[i] != '\0' && i < len)
	{
		if (str[i] == to_find[0])
		{	
			p = (char *)str + i;
			j = 0;
			while (to_find[j] == str[i + j] && i + j < len)
			{
				if (to_find[j + 1] == '\0')
					return (p);
				j++;
			}
			p = 0;
		}
		i++;
	}
	return (NULL);
}	
