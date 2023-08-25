/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort3.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elel-yak <elel-yak@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/02 10:43:01 by elel-yak          #+#    #+#             */
/*   Updated: 2023/06/08 01:07:51 by elel-yak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static	void	tmp(t_data *data)
{
	if (data->s_size == 3)
		exit(0);
}

static	void	tm(t_data *data)
{
	t_list	*tmp;
	int		i;

	tmp = data->stack_a;
	i = 0;
	data->ini.sor = (int *)malloc(3 * sizeof(int));
	while (tmp)
	{
		data->ini.sor[i] = tmp->num;
		i++;
		tmp = tmp->next;
	}
}

void	sort3(t_data *data)
{
	tm(data);
	if (data->ini.sor[0] > data->ini.sor[1] && data->ini.sor[2] > \
		data->ini.sor[1] && data->ini.sor[2] > data->ini.sor[0])
		sa(data);
	else if (data->ini.sor[0] > data->ini.sor[1] && data->ini.sor[2] > \
		data->ini.sor[1] && data->ini.sor[2] < data->ini.sor[0])
		ra(data);
	else if (data->ini.sor[0] < data->ini.sor[1] && data->ini.sor[2] < \
		data->ini.sor[1] && data->ini.sor[2] < data->ini.sor[0])
		rra(data);
	else if (data->ini.sor[0] > data->ini.sor[1] && data->ini.sor[2] < \
		data->ini.sor[1] && data->ini.sor[2] < data->ini.sor[0])
	{
		sa(data);
		rra(data);
	}
	else if (data->ini.sor[0] < data->ini.sor[1] && data->ini.sor[2] < \
		data->ini.sor[1] && data->ini.sor[2] > data->ini.sor[0])
	{
		sa(data);
		ra(data);
	}
	else
		tmp(data);
}

void	sort2(t_data *data)
{
	if (data->ini.sort[0] > data->ini.sort[1])
		sa(data);
	else
		exit(0);
}
