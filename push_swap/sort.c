/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elel-yak <elel-yak@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/02 10:42:58 by elel-yak          #+#    #+#             */
/*   Updated: 2023/06/08 01:07:54 by elel-yak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort(t_data *data)
{
	int	i;
	int	j;
	int	tmp;

	i = 1;
	data->s = 0;
	while (i < data->s_size)
	{
		j = i;
		while (j > 0 && data->ini.sort[j - 1] > data->ini.sort[j])
		{
			tmp = data->ini.sort[j - 1];
			data->ini.sort[j - 1] = data->ini.sort[j];
			data->ini.sort[j] = tmp;
			data->s++;
			j--;
		}
		i++;
	}
}

static void	erro(void)
{
	ft_putstr_fd("Error\n", 2);
	exit(1);
}

static void	nu(t_data *data, char **av)
{
	if (av[data->par.i][data->par.j] >= 48 && av[data->par.i] \
		[data->par.j] <= 57)
	{
		data->par.c++;
		while (av[data->par.i][data->par.j] >= 48 && av[data->par.i] \
				[data->par.j] <= 57)
			data->par.j++;
	}
}

void	ini(t_data *data, char **av)
{
	if (!(av[data->par.i][data->par.j] >= 48 && av[data->par.i] \
			[data->par.j] <= 57) && av[data->par.i][data->par.j] != ' ' \
			&& av[data->par.i][data->par.j] != '-')
	{
		ft_putstr_fd("Error\n", 2);
		exit(1);
	}
	nu(data, av);
	data->par.y++;
	if (av[data->par.i][data->par.j] == ' ')
		data->par.j++;
	if (av[data->par.i][data->par.j] == '-')
	{
		if (data->par.j == 0 && av[data->par.i][data->par.j + 1] != ' ' && \
			av[data->par.i][data->par.j + 1] != '-')
				data->par.j++;
		else if (av[data->par.i][data->par.j - 1] == ' ' && av[data->par.i] \
			[data->par.j + 1] != ' ' && av[data->par.i][data->par.j + 1] != '-')
			data->par.j++;
		else
			erro();
	}
}

int	ini_num(t_data *data, char **av)
{
	data->par.i = 1;
	data->par.j = 0;
	data->par.c = 0;
	while (av[data->par.i])
	{
		while (av[data->par.i][data->par.j])
			ini(data, av);
		if (data->par.y == 0)
			return (0);
		data->par.j = 0;
		data->par.y = 0;
		data->par.i++;
	}
	return (data->par.c);
}
