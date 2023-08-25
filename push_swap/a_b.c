/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   a_b.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elel-yak <elel-yak@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/02 10:42:06 by elel-yak          #+#    #+#             */
/*   Updated: 2023/06/08 01:44:30 by elel-yak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

static	void	init(t_data *data)
{
	if (data->s_size <= 10)
		data->ini.n = 5;
	if (data->s_size <= 150)
		data->ini.n = 8;
	if (data->s_size > 150)
		data->ini.n = 18;
	data->ini.mid = data->s_size / 2;
	data->ini.off = data->s_size / data->ini.n;
	data->ini.sta = data->ini.mid - data->ini.off;
	data->ini.end = data->ini.mid + data->ini.off;
}

static	void	tm(t_data *data)
{
	data->ini.end = data->ini.end + data->ini.off;
	if (data->ini.end >= data->s_size)
		data->ini.end = data->s_size - 1;
	data->ini.sta = data->ini.sta - data->ini.off;
	if (data->ini.sta <= 0)
		data->ini.sta = 0;
}

void	a_b(t_data *data)
{
	int	i;

	init(data);
	while (ft_lstsize(data->stack_a))
	{
		i = 0;
		while ((data->ini.end - data->ini.sta) + 1 != ft_lstsize(data->stack_b))
		{
			if (data->ini.sort[data->ini.sta] <= data->stack_a->num && \
				data->ini.sort[data->ini.end] >= data->stack_a->num)
			{
				pb(data);
				if (data->stack_b->num < data->ini.sort[data->ini.mid])
					rb(data);
				i++;
			}
			else
				ra(data);
		}
		tm(data);
	}
}
