/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   logic_finish2.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tomartin <tomartin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/02 19:36:48 by tomartin          #+#    #+#             */
/*   Updated: 2021/08/02 19:36:49 by tomartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	move_to_stack_a(t_stack *stack, int i, int j)
{
	if (i <= j)
	{
		while (i > 0)
		{
			if (!can_do_rr (stack))
				do_rb (stack);
			i--;
		}
	}
	else if (i > j)
	{
		while (j >= 0)
		{
			if (!can_do_rrr (stack))
				do_rrb (stack);
			j--;
		}
	}
	do_pa (stack);
}
