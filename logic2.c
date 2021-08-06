/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   logic2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tomartin <tomartin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/02 19:36:27 by tomartin          #+#    #+#             */
/*   Updated: 2021/08/03 18:22:08 by tomartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	search_num_in_parts_top(t_stack *stack)
{
	int	i;

	i = 0;
	while (stack->st_a[i] != stack->to_move[0])
	{
		if (stack->st_a[i] == stack->to_move[0])
			return (i);
		i++;
	}
	return (i);
}	

int	search_num_in_parts_end(t_stack *stack)
{
	int	i;
	int	c;

	c = 0;
	i = stack->a_end;
	while (stack->st_a[i] != stack->to_move[0])
	{
		if (stack->st_a[i] == stack->to_move[0])
			return (i);
		i--;
		c++;
	}
	return (c);
}

void	logic_iteration(t_stack *stack, int y, int x)
{
	int	i;
	int	j;

	while (x < stack->st_max / y)
	{
		stack->midel_a = stack->aux_stack[stack->a_end / x];
		midelacction_pass_b (stack);
		stack->midel_b = stack->aux_stack[stack->b_end / x];
		midelacction_pass_a (stack);
		x *= 2;
	}
	while (stack->a_end != 0)
	{
		main_magic_logic (stack);
		i = search_num_in_parts_top (stack);
		j = search_num_in_parts_end (stack);
		move_to_stack_b (stack, i, j);
	}
}
