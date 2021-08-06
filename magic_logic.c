/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   magic_logic.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tomartin <tomartin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/02 19:36:20 by tomartin          #+#    #+#             */
/*   Updated: 2021/08/04 17:51:40 by tomartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	get_best_to_move(t_stack *stack)
{
	int	i;

	i = 0;
	stack->to_move[0] = stack->fct[0][0];
	stack->to_move[1] = stack->fct[0][1];
	while (i < stack->a_end)
	{
		if (stack->to_move[1] > stack->fct[i][1])
		{
			stack->to_move[0] = stack->fct[i][0];
			stack->to_move[1] = stack->fct[i][1];
		}
		else if (stack->to_move[1] == stack->fct[i][1] &&
			stack->to_move[0] > stack->fct[i][0])
		{
			stack->to_move[0] = stack->fct[i][0];
			stack->to_move[1] = stack->fct[i][1];
		}
		i++;
	}
}

static void	calculate_factor_stack(t_stack *stack, int i, int j)
{
	long int	aux[2];
	int			c;

	c = 0;
	aux[0] = stack->fct[i][0];
	aux[1] = stack->fct[i][1];
	stack->fct[i][0] = stack->fct[j][0];
	stack->fct[i][1] = stack->fct[j][1];
	stack->fct[j][0] = aux[0];
	stack->fct[j][1] = aux[1];
}

static void	order_f_stack(t_stack *st)
{
	int	i;
	int	j;
	int	c;

	i = 0;
	c = 0;
	while (i < st->a_end)
	{
		j = i + 1;
		while (j < st->a_end)
		{
			if (st->fct[i][0] > st->fct[j][0])
				calculate_factor_stack (st, i, j);
			j++;
		}
		i++;
	}
	while (c < st->a_end)
	{
		st->fct[c][1] += (c * 1.618);
		c++;
	}
}

void	main_magic_logic(t_stack *st)
{
	int	i;

	i = 0;
	st->midel = (st->a_end / 2);
	st->fct = (long int **) malloc (sizeof (long int *) * st->a_end);
	while (i < st->a_end)
	{
		st->fct[i] = (long int *) malloc (sizeof (long int) * 2);
		st->fct[i][0] = st->st_a[i];
		st->fct[i][1] = i * 1.618 + 3.14;
		if (i > st->midel)
		{
			st->fct[i][1] = (i - st->midel);
			st->fct[i][1] = (st->midel - st->fct[i][1]) * 1.618 + 3.14;
		}
		i++;
	}
	order_f_stack (st);
	get_best_to_move (st);
	i--;
	while (i >= 0)
		free (st->fct[i--]);
	free (st->fct);
}
