/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zzirh <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/12 17:03:09 by zzirh             #+#    #+#             */
/*   Updated: 2021/11/16 18:39:10 by zzirh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	front(char const *s1, char const *set)
{
	int	i;

	i = 0;
	while (s1)
	{
		if (!ft_strchr(set, s1[i]))
			break ;
		i++;
	}
	return (i);
}

static int	end(char const *s1, char const *set)
{
	int	len;

	len = ft_strlen(s1);
	while (len != 0)
	{
		if (!ft_strchr(set, s1[len -1]))
			break ;
		len --;
	}
	return (len);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	fr;
	size_t	en;
	char	*ptr;

	if (!s1)
		return (NULL);
	if (!set)
		return (ft_strdup(s1));
	fr = front(s1, set);
	en = end(s1, set);
	if (fr > en)
	{
		return (ft_strdup(""));
	}
	ptr = (char *)malloc(en - fr + 1);
	if (!ptr)
		return (NULL);
	ft_strlcpy(ptr, s1 + fr, en - fr + 1);
	return (ptr);
}

/*int main()
{
  char so[]= "alopQ";
  char po[]= "Q";
  printf("%s\n", ft_strtrim(so,po));
  //puts(ft_strtrim(so,po));
}*/
