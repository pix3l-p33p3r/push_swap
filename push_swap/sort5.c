/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort5.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elel-yak <elel-yak@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/02 10:43:07 by elel-yak          #+#    #+#             */
/*   Updated: 2023/06/08 01:07:47 by elel-yak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./push_swap.h"

void	tmp(t_data *data)
{
	while (ft_lstsize(data->stack_b))
	{
		pa(data);
		ra(data);
	}
}

void	sort5(t_data *data)
{
	int	i;

	i = 1;
	sort(data);
	while (ft_lstsize(data->stack_b) != data->s_size - 3)
	{
		if (data->stack_a->num == data->ini.sort[data->s_size - i])
		{
			pb(data);
			if (ft_lstsize(data->stack_b) == 2 && data->stack_b->num \
				== data->ini.sort[data->s_size - 1] && data->s_size == 5)
				rb(data);
			i++;
		}
		else if (data->stack_a->num == data->ini.sort[data->s_size - \
			(i + 1)] && ft_lstsize(data->stack_b) == 0 && data->s_size == 5)
			pb(data);
		else
			ra(data);
	}
	sort3(data);
	tmp(data);
}
