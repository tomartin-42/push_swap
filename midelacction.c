/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   midelacction.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tomartin <tomartin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/02 19:36:12 by tomartin          #+#    #+#             */
/*   Updated: 2021/08/02 19:36:13 by tomartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	finish_do_a(t_stack *stack)
{
	int	i;
	int	answ;

	i = 0;
	answ = 0;
	while (i < stack->a_end && stack->st_a[i] != EMPY)
	{
		if (stack->st_a[i] <= stack->midel_a && stack->a_end > 2)
		{
			answ++;
			break ;
		}
		i++;
	}
	return (answ);
}

int	finish_do_b(t_stack *stack)
{
	int	i;
	int	answ;

	i = 0;
	answ = 0;
	while (i < stack->b_end)
	{
		if (stack->st_b[i] > stack->midel_b && stack->b_end > 2)
		{
			answ++;
			break ;
		}
		i++;
	}
	return (answ);
}

void	midelacction_pass_b(t_stack *stack)
{
	while (finish_do_a (stack))
	{
		if (stack->st_a[0] <= stack->midel_a && stack->st_a[2] != EMPY)
			do_pb (stack);
		else
			do_ra (stack);
	}
}

void	midelacction_pass_a(t_stack *stack)
{
	while (finish_do_b (stack))
	{
		if (stack->st_b[0] > stack->midel_b && stack->st_b[2] != EMPY)
			do_pa (stack);
		else
			do_rb (stack);
	}
}
