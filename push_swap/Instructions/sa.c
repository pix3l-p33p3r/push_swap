/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sa.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elel-yak <elel-yak@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/02 10:40:37 by elel-yak          #+#    #+#             */
/*   Updated: 2023/06/08 01:08:28 by elel-yak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	sa(t_data *data)
{
	int	tmp;

	tmp = 0;
	if (ft_lstsize(data->stack_a) >= 2)
	{
		tmp = data->stack_a->num;
		data->stack_a->num = data->stack_a->next->num;
		data->stack_a->next->num = tmp;
		ft_putstr_fd("sa\n", 1);
	}
}
