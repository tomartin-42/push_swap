/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   moves2_bonus.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tomartin <tomartin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/02 19:42:51 by tomartin          #+#    #+#             */
/*   Updated: 2021/08/04 18:16:46 by tomartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker_bonus.h"

void	do_pa(t_stack *stack)
{
	if (stack->st_b[0] != EMPY)
	{
		make_space_in_a (stack);
		stack->st_a[0] = stack->st_b[0];
		stack->st_b[0] = EMPY;
		stack->a_end += 1;
		stack->b_end -= 1;
		quit_upper_in_b (stack);
	}
}

void	do_pb(t_stack *stack)
{
	if (stack->st_a[0] != EMPY)
	{
		make_space_in_b (stack);
		stack->st_b[0] = stack->st_a[0];
		stack->st_a[0] = EMPY;
		stack->b_end += 1;
		stack->a_end -= 1;
		quit_upper_in_a (stack);
	}
}

void	do_ra(t_stack *stack)
{
	long int	aux;
	int			i;

	i = 1;
	if (stack->st_a[0] != EMPY)
	{
		while (i < stack->a_end)
		{	
			aux = stack->st_a[i - 1];
			stack->st_a[i - 1] = stack->st_a[i];
			stack->st_a[i] = aux;
			i++;
		}
	}
}

void	do_rb(t_stack *stack)
{
	long int	aux;
	int			i;

	i = 1;
	if (stack->st_b[0] != EMPY)
	{
		while (i < stack->b_end)
		{	
			aux = stack->st_b[i - 1];
			stack->st_b[i - 1] = stack->st_b[i];
			stack->st_b[i] = aux;
			i++;
		}
	}
}

void	do_rr(t_stack *stack)
{
	long int	aux;
	int			i;

	i = 1;
	if (stack->st_a[0] != EMPY && stack->st_b[0] != EMPY)
	{
		while (i < stack->a_end)
		{	
			aux = stack->st_a[i - 1];
			stack->st_a[i - 1] = stack->st_a[i];
			stack->st_a[i] = aux;
			i++;
		}
		i = 1;
		while (i < stack->b_end)
		{	
			aux = stack->st_b[i - 1];
			stack->st_b[i - 1] = stack->st_b[i];
			stack->st_b[i] = aux;
			i++;
		}
	}
}
