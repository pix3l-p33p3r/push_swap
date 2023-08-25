/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pb.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elel-yak <elel-yak@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 17:19:59 by elel-yak          #+#    #+#             */
/*   Updated: 2023/06/08 01:08:48 by elel-yak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	pb(t_data	*data)
{
	t_list	*tmp_a;
	t_list	*tmp_b;

	if (data->stack_a != NULL)
	{
		if (ft_lstsize(data->stack_a) >= 1)
		{
			tmp_a = data->stack_a;
			data->stack_a = data->stack_a->next;
			tmp_b = data->stack_b;
			data->stack_b = tmp_a;
			data->stack_b->next = tmp_b;
			ft_putstr_fd("pb\n", 1);
		}
	}
}
