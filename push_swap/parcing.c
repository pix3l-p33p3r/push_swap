/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parcing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elel-yak <elel-yak@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/02 10:42:25 by elel-yak          #+#    #+#             */
/*   Updated: 2023/06/08 01:45:39 by elel-yak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	error(t_data *data)
{
	data->i = 0;
	if (data->error == 2)
		exit(0);
	if (data->error == 5)
	{
		ft_putstr_fd("Error\n", 2);
		exit(1);
	}
}

static	void	tm(t_data *data)
{
	stack_a_fill(data);
	if (data->s_size != 2)
		sort(data);
	data->stack_b = NULL;
	if (data->s == 0)
		data->error = 2;
	error(data);
}

int	valid_number(char *num)
{
	int	i;

	i = 0;
	while (num[i])
	{
		if ((num[i] == '-' || num[i] == '+') && i == 0)
			i++;
		if (!num[i] || num[i] < '0' || num[i] > '9')
			return (0);
		i++;
	}
	return (1);
}

void	validate_and_store_numbers(t_data *data, char *input)
{
	int		j;
	char	**tmp;

	j = 0;
	tmp = ft_split(input, ' ');
	while (tmp[j])
	{
		if (!valid_number(tmp[j]))
		{
			ft_putstr_fd("Error\n", 2);
			exit(1);
		}
		data->ini.sort[data->h] = ft_atoi(tmp[j]);
		j++;
		data->h++;
	}
	my_free(tmp);
}

void	parcing(t_data *data, char **av, int ac)
{
	data->s_size = ac - 1;
	data->ini.sort = (int *)malloc(sizeof(int) * data->s_size);
	data->i = 1;
	data->h = 0;
	while (ac > data->i)
	{
		validate_and_store_numbers(data, av[data->i]);
		data->i++;
	}
	data->i = 0;
	tm(data);
	error(data);
}
