/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   moves3_bonus.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tomartin <tomartin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/02 19:42:56 by tomartin          #+#    #+#             */
/*   Updated: 2021/08/04 18:16:46 by tomartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker_bonus.h"

void	do_rra(t_stack *stack)
{
	long int	aux;
	int			i;

	i = stack->a_end - 1;
	if (stack->st_a[0] != EMPY)
	{
		while (i > 0)
		{
			aux = stack->st_a[i - 1];
			stack->st_a[i - 1] = stack->st_a[i];
			stack->st_a[i] = aux;
			i--;
		}
	}
}

void	do_rrb(t_stack *stack)
{
	long int	aux;
	int			i;

	i = stack->b_end - 1;
	if (stack->st_b[0] != EMPY)
	{
		while (i > 0)
		{
			aux = stack->st_b[i - 1];
			stack->st_b[i - 1] = stack->st_b[i];
			stack->st_b[i] = aux;
			i--;
		}
	}
}

void	do_rrr(t_stack *stack)
{
	long int	aux;
	int			i;

	i = stack->a_end - 1;
	if (stack->st_a[0] != EMPY)
	{
		while (i > 0)
		{
			aux = stack->st_a[i - 1];
			stack->st_a[i - 1] = stack->st_a[i];
			stack->st_a[i] = aux;
			i--;
		}
		i = stack->b_end - 1;
		while (i > 0)
		{
			aux = stack->st_b[i - 1];
			stack->st_b[i - 1] = stack->st_b[i];
			stack->st_b[i] = aux;
			i--;
		}
	}
}
