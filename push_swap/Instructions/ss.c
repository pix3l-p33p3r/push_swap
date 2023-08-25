/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ss.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elel-yak <elel-yak@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/02 10:40:44 by elel-yak          #+#    #+#             */
/*   Updated: 2023/06/08 01:08:22 by elel-yak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"../push_swap.h"

static	void	s_sa(t_data *data)
{
	int	tmp;

	tmp = 0;
	if (ft_lstsize(data->stack_a) >= 2)
	{
		tmp = data->stack_a->num;
		data->stack_a->num = data->stack_a->next->num;
		data->stack_a->next->num = tmp;
	}
}

static	void	s_sb(t_data *data)
{
	int	tmp;

	tmp = 0;
	if (ft_lstsize(data->stack_b) >= 2)
	{
		tmp = data->stack_b->num;
		data->stack_b->num = data->stack_b->next->num;
		data->stack_b->next->num = tmp;
	}
}

void	ss(t_data *data)
{
	s_sa(data);
	s_sb(data);
	ft_putstr_fd("ss\n", 1);
}
