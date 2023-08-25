/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   b_a.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elel-yak <elel-yak@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/02 10:42:09 by elel-yak          #+#    #+#             */
/*   Updated: 2023/06/08 01:08:07 by elel-yak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static	void	b_index(t_data *data)
{
	t_list	*tmp;
	int		i;

	i = 0;
	tmp = data->stack_b;
	data->b_index = 0;
	while (tmp)
	{
		if (tmp->num == data->ini.sort[data->tm])
		{
			data->b_index = i;
			return ;
		}
		tmp = tmp->next;
		i++;
	}
	data->b_index = -1 ;
}

static	void	a_tail(t_data *data)
{
	t_list	*tmp;

	tmp = data->stack_a;
	while (tmp && tmp->next)
		tmp = tmp->next;
	data->a_tail = tmp->num;
}

static	void	tm(t_data *data)
{
	if (data->stack_b->num == data->ini.sort[data->tm])
	{
		pa(data);
		data->tm--;
	}
	else if (data->ini.dow == 0 || data->stack_b->num > data->a_tail)
	{
		pa(data);
		ra(data);
		a_tail(data);
		data->ini.dow++;
	}
	else
	{
		if (data->b_index > ft_lstsize(data->stack_b) / 2)
			rrb(data);
		else
			rb(data);
	}
}

void	b_a(t_data	*data)
{
	data->tm = data->s_size - 1;
	data->ini.dow = 0;
	while (ft_lstsize(data->stack_b) || data->ini.dow)
	{
		b_index(data);
		if (data->b_index != -1)
			tm(data);
		else if (data->ini.dow)
		{
			rra(data);
			a_tail(data);
			data->ini.dow--;
			data->tm--;
		}
	}
}
