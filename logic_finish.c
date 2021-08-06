/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   logic_finish.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tomartin <tomartin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/02 19:36:53 by tomartin          #+#    #+#             */
/*   Updated: 2021/08/02 19:36:53 by tomartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// static int	can_optimizer_a_stack (t_stack *stack)
// {
// 	int	i;
// 	int	j;
// 	int	c;

// 	j = 0;
// 	i = 0;
// 	c = 0;
// 	while (i < stack->a_end)
// 	{
// 		if (stack->st_b[0] > stack->st_a[i])
// 			c++;
// 		i++;
// 	}
// 	if (stack->st_b[0] > stack->st_a[0] && stack->st_a[1] != EMPY)
// 		j = 1;
// 	if (c == stack->a_end)
// 	{
// 		return (0);
// 	}
// 	return (j);
// }

//NEW
// static void	optimizer_a_stack (t_stack *stack)
// {
// 	while (can_optimizer_a_stack (stack))
// 		do_ra (stack);
// }

static int	search_num_finish_top(t_stack *stack)
{
	int	i;

	i = 0;
	while (stack->st_b[i] != stack->aux_stack[stack->b_end - 1]
		&& i <= stack->midel)
	{
		if (stack->st_b[i] == stack->aux_stack[stack->b_end - 1])
			return (i);
		i++;
	}
	return (i);
}	

static int	search_num_finish_end(t_stack *stack)
{
	int	i;
	int	c;

	c = 0;
	i = stack->b_end - 1;
	while (stack->st_b[i] != stack->aux_stack[stack->b_end - 1]
		&& i > stack->midel)
	{
		if (stack->st_b[i] == stack->aux_stack[stack->b_end - 1])
			return (c);
		i--;
		c++;
	}
	return (c);
}

void	main_logic_finish(t_stack *stack)
{
	int	i;
	int	j;

	while (stack->b_end != 0)
	{	
		can_do_rrr (stack);
		stack->midel = stack->b_end / 2;
		i = search_num_finish_top (stack);
		j = search_num_finish_end (stack);
		move_to_stack_a (stack, i, j);
		can_do_rr (stack);
	}
}
