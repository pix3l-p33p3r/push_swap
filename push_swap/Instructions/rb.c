/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rb.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elel-yak <elel-yak@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/02 10:40:04 by elel-yak          #+#    #+#             */
/*   Updated: 2023/06/08 01:08:42 by elel-yak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	rb(t_data *data)
{
	t_list	*tmp;

	if (ft_lstsize(data->stack_b) > 1)
	{
		tmp = data->stack_b;
		data->stack_b = data->stack_b->next;
		ft_lstadd_back(&data->stack_b, tmp);
		ft_putstr_fd("rb\n", 1);
	}
}
