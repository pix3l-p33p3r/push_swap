/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   LL_manipulation.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elel-yak <elel-yak@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/02 10:41:36 by elel-yak          #+#    #+#             */
/*   Updated: 2023/06/08 01:08:12 by elel-yak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*tmp;

	tmp = *lst;
	if (lst)
	{
		if (tmp)
		{
			while (tmp && tmp->next != NULL)
			{
				tmp = tmp->next;
			}
			tmp->next = new;
			new->next = 0;
		}
		else
			*lst = new;
	}
}

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	t_list	*first;

	if (lst)
	{
		first = *lst;
		*lst = new;
		new -> next = first;
	}
}

t_list	*ft_lstnew(int num)
{
	t_list	*new;

	new = malloc(sizeof(t_list));
	if (!new)
		return (NULL);
	new -> num = num;
	new -> next = NULL;
	return (new);
}

int	ft_lstsize(t_list *lst)
{
	int	len;

	len = 0;
	while (lst)
	{
		lst = lst->next;
		len++;
	}
	return (len);
}
