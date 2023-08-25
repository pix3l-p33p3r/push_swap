/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_fill.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elel-yak <elel-yak@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/02 10:43:11 by elel-yak          #+#    #+#             */
/*   Updated: 2023/06/08 01:07:41 by elel-yak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	stack_a_fill(t_data *data)
{
	int	i;

	i = 1;
	data->stack_a = ft_lstnew(data->ini.sort[0]);
	while (data->s_size > i)
	{
		ft_lstadd_back(&data->stack_a, ft_lstnew(data->ini.sort[i]));
		i++;
	}	
}
