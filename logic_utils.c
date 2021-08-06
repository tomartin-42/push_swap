/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   logic_utils.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tomartin <tomartin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/02 19:36:44 by tomartin          #+#    #+#             */
/*   Updated: 2021/08/02 19:36:44 by tomartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	check_order_a(t_stack *stack)
{
	int	i;
	int	answ;

	answ = 1;
	i = 1;
	while (i < stack->a_end)
	{
		if (stack->st_a[i - 1] > stack->st_a[i])
			;
		else
			answ = 0;
		i++;
	}
	return (answ);
}

int	check_order_ab(t_stack *stack)
{
	if (!check_order_a (stack) || !check_order_b (stack))
		return (0);
	return (1);
}

int	check_order_b(t_stack *stack)
{
	int	i;
	int	answ;

	answ = 1;
	i = 1;
	while (i < stack->b_end)
	{
		if (stack->st_b[i - 1] < stack->st_b[i])
			;
		else
			answ = 0;
		i++;
	}
	return (answ);
}

// initialize and order aux_stack
void	aux_stack_order(t_stack *stack)
{
	int			i;
	int			j;
	long int	aux;

	initialize_aux_stack (stack);
	i = 0;
	while (i < stack->st_max)
	{
		j = i + 1;
		while (j < stack->st_max)
		{
			if (stack->aux_stack[i] > stack->aux_stack[j])
			{
				aux = stack->aux_stack[i];
				stack->aux_stack[i] = stack->aux_stack[j];
				stack->aux_stack[j] = aux;
			}
			j++;
		}
		i++;
	}
}
