/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zzirh <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 19:33:28 by zzirh             #+#    #+#             */
/*   Updated: 2021/11/17 22:06:19 by zzirh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*node;
	t_list	*new;

	new = NULL;
	while (lst)
	{
		node = ft_lstnew(f(lst->content));
		if (!node)
		{
			ft_lstdelone(node, del);
			return (NULL);
		}
		ft_lstadd_back(&new, node);
		lst = lst->next;
	}
	return (new);
}
/*
void del(void *s)
{
    free(s);
}
void function(void *s)
{
    printf("%s\n", s);
}
int main ()
{
    t_list **a, *p1, *p2, p3;

    a = &p1;
    p1 = ft_lstnew(ft_strdup("l1"));
    p2 = ft_lstnew(ft_strdup("l2"));
    p3 = ft_lstnew(ft_strdup("l3"));
    ft_lstadd_front(a, p2);
    ft_lstadd_back(a, p3);
    ft_lstiter(a, &function);
    printf("size is %d\n",ft_lstsize(a));
    ft_lstdelone(p2, &del);
    ft_lstclear(a, del);
    ft_lstiter(a, &function);
    printf("size is %d\n",ft_lstsize(*a));
}
*/