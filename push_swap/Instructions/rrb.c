/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rrb.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elel-yak <elel-yak@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/02 10:40:27 by elel-yak          #+#    #+#             */
/*   Updated: 2023/06/08 01:08:34 by elel-yak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	rrb(t_data *data)
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
		ft_putstr_fd("rrb\n", 1);
	}
}
