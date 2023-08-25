/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rrr.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elel-yak <elel-yak@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/02 10:40:32 by elel-yak          #+#    #+#             */
/*   Updated: 2023/06/08 01:08:31 by elel-yak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

static	void	s_rrb(t_data *data)
{
	t_list	*tmp;
	t_list	*tmp_1;

	if (ft_lstsize(data->stack_b) > 1)
	{
		tmp = data->stack_b;
		while (tmp && tmp->next)
		{
			tmp_1 = tmp;
			tmp = tmp->next;
		}
		tmp_1->next = 0;
		ft_lstadd_front(&data->stack_b, tmp);
	}
}

static	void	s_rra(t_data *data)
{
	t_list	*tmp;
	t_list	*tmp_1;

	if (ft_lstsize(data->stack_a) > 1)
	{
		tmp = data->stack_a;
		while (tmp && tmp->next)
		{
			tmp_1 = tmp;
			tmp = tmp->next;
		}
		tmp_1->next = 0;
		ft_lstadd_front(&data->stack_a, tmp);
	}
}

void	rrr(t_data *data)
{
	s_rra(data);
	s_rrb(data);
	ft_putstr_fd("rrr\n", 1);
}
