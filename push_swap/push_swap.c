/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elel-yak <elel-yak@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/02 10:42:50 by elel-yak          #+#    #+#             */
/*   Updated: 2023/06/08 01:07:59 by elel-yak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	is_sorted(t_list *stack)
{
	t_list	*tmp;

	tmp = stack;
	while (tmp->next)
	{
		if (tmp->num > tmp->next->num)
			return (0);
		tmp = tmp->next;
	}
	return (1);
}

int	is_duplicated(t_list *stack)
{
	t_list	*tmp;
	t_list	*tmp2;

	tmp = stack;
	while (tmp)
	{
		tmp2 = tmp->next;
		while (tmp2)
		{
			if (tmp->num == tmp2->num)
				return (1);
			tmp2 = tmp2->next;
		}
		tmp = tmp->next;
	}
	return (0);
}

int	main(int ac, char **av)
{
	t_data	*data;

	if (ac < 2)
		exit(1);
	data = (t_data *)malloc(sizeof(t_data));
	parcing(data, av, ac);
	if (is_duplicated(data->stack_a))
	{
		ft_putstr_fd("Error\n", 2);
		exit(1);
	}
	if (is_sorted(data->stack_a))
		exit(0);
	if (data->s_size == 2)
		sort2(data);
	else if (data->s_size == 3)
		sort3(data);
	else if (data->s_size < 8)
		sort5(data);
	else if (data->s_size > 5)
	{
		a_b(data);
		b_a(data);
	}
	return (0);
}
