/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   logic.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tomartin <tomartin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/02 19:36:35 by tomartin          #+#    #+#             */
/*   Updated: 2021/08/04 17:53:41 by tomartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

//NEW
static int	can_optimizer_b_stack(t_stack *stack)
{
	int	i;
	int	j;
	int	c;

	j = 0;
	i = 0;
	c = 0;
	while (i < stack->b_end)
	{
		if (stack->st_a[0] > stack->st_b[i])
			c++;
		i++;
	}
	if (stack->st_a[0] > stack->st_b[0] && stack->st_b[1] != EMPY)
		j = 1;
	if (c == stack->b_end)
		return (0);
	return (j);
}

static void	optimizer_b_stack(t_stack *stack)
{
	while (can_optimizer_b_stack (stack))
		do_rb (stack);
}

void	move_to_stack_b(t_stack *stack, int i, int j)
{
	if (i <= j)
	{
		while (i > 0)
		{
			do_ra (stack);
			i--;
		}
	}
	else
	{
		while (j > 0)
		{
			do_rra (stack);
			j--;
		}
	}
	optimizer_b_stack (stack);
	do_pb (stack);
}

static void	optimizer_plus(t_stack *stack)
{
	if (stack->st_max > 370)
	{
		stack->midel_a = stack->aux_stack[366];
		midelacction_pass_b (stack);
		stack->midel_b = stack->aux_stack[222];
		midelacction_pass_a (stack);
		stack->midel_a = stack->aux_stack[111];
		midelacction_pass_b (stack);
		stack->midel_b = stack->aux_stack[222];
		midelacction_pass_a (stack);
		stack->midel_a = stack->aux_stack[111];
		midelacction_pass_b (stack);
		stack->midel_b = stack->aux_stack[333];
		midelacction_pass_a (stack);
	}
	else if (stack->st_max > 91 && stack->st_max < 109)
	{
		stack->midel_a = stack->aux_stack[50];
		midelacction_pass_b (stack);
	}
}

void	main_logic(t_stack *stack)
{
	int	i;
	int	j;
	int	x;
	int	y;

	optimizer_plus (stack);
	x = 1;
	y = 35;
	if (stack->st_max > 90 && stack->st_max < 109)
	{
		y = 15;
	}
	logic_iteration (stack, y, x);
}
