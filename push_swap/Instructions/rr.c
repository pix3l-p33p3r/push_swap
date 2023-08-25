/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rr.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elel-yak <elel-yak@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/02 10:40:09 by elel-yak          #+#    #+#             */
/*   Updated: 2023/06/08 01:08:39 by elel-yak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

static	void	s_ra(t_data *data)
{
	t_list	*tmp;

	if (ft_lstsize(data->stack_a) > 1)
	{
		tmp = data->stack_a;
		data->stack_a = data->stack_a->next;
		ft_lstadd_back(&data->stack_a, tmp);
	}
}

static	void	s_rb(t_data *data)
{
	t_list	*tmp;

	if (ft_lstsize(data->stack_b) > 1)
	{
		tmp = data->stack_b;
		data->stack_b = data->stack_b->next;
		ft_lstadd_back(&data->stack_b, tmp);
	}
}

void	rr(t_data *data)
{
	s_ra(data);
	s_rb(data);
	ft_putstr_fd("rr\n", 1);
}
