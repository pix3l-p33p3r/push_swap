/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sb.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elel-yak <elel-yak@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/02 10:40:40 by elel-yak          #+#    #+#             */
/*   Updated: 2023/06/08 01:08:25 by elel-yak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	sb(t_data *data)
{
	int	tmp;

	tmp = 0;
	if (ft_lstsize(data->stack_b) >= 2)
	{
		tmp = data->stack_b->num;
		data->stack_b->num = data->stack_b->next->num;
		data->stack_b->next->num = tmp;
		ft_putstr_fd("sb\n", 1);
	}
}
