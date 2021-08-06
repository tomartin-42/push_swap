/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   logic_utils2.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tomartin <tomartin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/02 19:36:39 by tomartin          #+#    #+#             */
/*   Updated: 2021/08/02 19:36:40 by tomartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	can_do_ss(t_stack *stack)
{
	if (stack->st_a[0] > stack->st_a[1] && stack->st_b[0] < stack->st_b [1]
		&& stack->st_a[1] != EMPY && stack->st_b[1] != EMPY)
	{	
		do_ss (stack);
	}
}

int	can_do_rr(t_stack *st)
{
	int	i;

	i = 0;
	while (st->st_a[1] != EMPY && st->st_b[1] != EMPY
		&& st->st_b[0] < st->st_b[st->b_end - 1]
		&& st->st_a[0] > st->st_a[st->a_end - 1])
	{
		do_rr (st);
		i++;
	}
	return (i);
}

int	can_do_rrr(t_stack *st)
{
	int	i;

	i = 0;
	while (st->st_a[1] != EMPY && st->st_b[1] != EMPY
		&& st->st_b[0] < st->st_b[st->b_end - 1]
		&& st->st_a[0] > st->st_a[st->a_end - 1])
	{
		do_rrr (st);
		i++;
	}
	return (i);
}

//Check if stack->st_a is in order
int	check_is_order_correct(t_stack *stack)
{
	int	i;

	i = 1;
	while (i < stack->st_max)
	{
		if (stack->st_a[i - 1] > stack->st_a[i])
			return (0);
		i++;
	}
	return (1);
}
