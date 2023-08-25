/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ra.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elel-yak <elel-yak@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/02 10:39:49 by elel-yak          #+#    #+#             */
/*   Updated: 2023/06/08 01:08:45 by elel-yak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ra(t_data *data)
{
	t_list	*tmp;

	if (ft_lstsize(data->stack_a) > 1)
	{
		tmp = data->stack_a;
		data->stack_a = data->stack_a->next;
		ft_lstadd_back(&data->stack_a, tmp);
		ft_putstr_fd("ra\n", 1);
	}
}
