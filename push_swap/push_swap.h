/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elel-yak <elel-yak@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/02 10:42:54 by elel-yak          #+#    #+#             */
/*   Updated: 2023/06/08 01:07:57 by elel-yak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H

# define PUSH_SWAP_H

# include <unistd.h>
# include <stdio.h>
# include <stdlib.h>
# include <limits.h>
# include <fcntl.h>

typedef struct s_list
{
	int				num;
	struct s_list	*next;
}				t_list;

typedef struct s_ini
{
	int		n;
	int		mid;
	int		off;
	int		*sort;
	int		*sor;
	int		sta;
	int		dow;
	int		end;
}				t_ini;

typedef struct s_par
{
	int	i;
	int	j;
	int	c;
	int	y;

}			t_par;

typedef struct s_data
{
	int		i;
	int		j;
	int		h;
	int		error;
	int		b_index;
	int		a_tail;
	int		s_size;
	int		tm;
	int		s;
	char	**tmp;
	t_par	par;
	t_list	*stack_a;
	t_list	*stack_b;
	t_ini	ini;	
}				t_data;

//libft
int		ft_atoi(const char *str);
char	*ft_substr(char const *s, unsigned int start, size_t j);
void	ft_bzero(void *s, size_t n);
void	*ft_calloc(size_t count, size_t size);
char	**ft_split(const char *s, char c);
char	**my_free(char **arr);
size_t	ft_strlen(const char *s);
void	ft_putstr_fd(char *s, int fd);
int		ft_lstsize(t_list *lst);
t_list	*ft_lstnew(int num);
void	ft_lstadd_front(t_list **lst, t_list *new);
void	ft_lstadd_back(t_list **lst, t_list *new);
//endlibft

//instruction
void	sa(t_data *data);
void	ss(t_data *data);
void	pa(t_data *data);
void	ra(t_data *data);
void	sb(t_data *data);
void	rb(t_data *data);
void	rr(t_data *data);
void	rra(t_data *data);
void	rrb(t_data *data);
void	rrr(t_data *data);
void	pb(t_data *data);
//instruction

void	error(t_data *data);
int		ini_num(t_data *data, char **av);
void	ini(t_data *data, char **av);
void	a_b(t_data *data);
void	b_a(t_data *data);
void	sort(t_data *data);
void	sort3(t_data *data);
void	sort2(t_data *data);
void	sort5(t_data *data);
void	parcing(t_data *data, char **av, int ac);
void	stack_a_fill(t_data *data);

#endif