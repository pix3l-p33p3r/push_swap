/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pa.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elel-yak <elel-yak@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/02 10:39:16 by elel-yak          #+#    #+#             */
/*   Updated: 2023/06/08 01:08:50 by elel-yak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	pa(t_data	*data)
{
	t_list	*tmp_a;
	t_list	*tmp_b;

	if (ft_lstsize(data->stack_b) >= 1)
	{
		tmp_b = data->stack_b;
		data->stack_b = data->stack_b->next;
		tmp_a = data->stack_a;
		data->stack_a = tmp_b;
		data->stack_a->next = tmp_a;
		ft_putstr_fd("pa\n", 1);
	}
}
