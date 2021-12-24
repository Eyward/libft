/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zzirh <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/13 15:03:21 by zzirh             #+#    #+#             */
/*   Updated: 2021/11/14 02:51:14 by zzirh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static int	strcmpt(char const *s, char c)
{
	int	i;
	int	cpt;
	int	a;

	i = 0;
	cpt = 0;
	a = 0;
	while (s[i])
	{
		if (s[i] != c && a == 0)
		{
			a = 1;
			cpt++;
		}
		else if (s[i] == c && a == 1)
			a = 0;
		i++;
	}
	return (cpt);
}

static int	charcmpt(char **s, int len, char c)
{
	len = 0;
	while (**s && **s == c)
	{
		(*s)++;
	}
	while ((*s)[len] && (*s)[len] != c)
	{
		len++;
	}
	return (len + 1);
}

static char	**free_ptr(char **ptr)
{
	int	i;

	i = 0;
	while (ptr[i])
	{
		free(ptr[i]);
		i++;
	}
	free(ptr);
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	char	**ptr;
	char	*str;
	int		i;
	int		j;

	if (!s)
		return (NULL);
	ptr = (char **)malloc(sizeof(char *) * (strcmpt(s, c) + 1));
	if (!ptr)
		return (NULL);
	str = (char *)s;
	i = 0;
	j = 0;
	while (i < strcmpt(s, c))
	{
		str = str + j;
		j = charcmpt(&str, j, c);
		ptr[i] = (char *)malloc(sizeof(char) * j);
		if (!ptr[i])
			free_ptr(ptr);
		ft_strlcpy(ptr[i], str, j);
		i++;
	}
	ptr[i] = 0;
	return (ptr);
}
/*
int                main(void)
    {
        char    **tab;
        unsigned int    i;

        i = 0;
        tab = ft_split("      split    this        forme       !    ", ' ');
        while (tab[i] != NULL)
        {
            printf("--%s--\n", tab[i]);
            i++;
        }
    } */