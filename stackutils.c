/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stackutils.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tomartin <tomartin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/02 19:35:29 by tomartin          #+#    #+#             */
/*   Updated: 2021/08/03 18:30:04 by tomartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	make_space_in_a(t_stack *stack)
{
	long int	aux;
	int			i;

	i = stack->a_end;
	while (i >= 1)
	{
		aux = stack->st_a[i - 1];
		stack->st_a[i - 1] = stack->st_a[i];
		stack->st_a[i] = aux;
		i--;
	}
}

void	make_space_in_b(t_stack *stack)
{
	long int	aux;
	int			i;

	i = stack->b_end;
	while (i >= 1)
	{
		aux = stack->st_b[i - 1];
		stack->st_b[i - 1] = stack->st_b[i];
		stack->st_b[i] = aux;
		i--;
	}
}

void	quit_upper_in_b(t_stack *stack)
{
	int			i;
	long int	aux;

	i = 1;
	if (stack->st_b[0] == EMPY)
	{
		while (i <= stack->b_end)
		{
			aux = stack->st_b[i - 1];
			stack->st_b[i - 1] = stack->st_b[i];
			stack->st_b[i] = aux;
			i++;
		}
	}
}

void	quit_upper_in_a(t_stack *stack)
{
	int			i;
	long int	aux;

	i = 1;
	if (stack->st_a[0] == EMPY)
	{
		while (i <= stack->a_end)
		{
			aux = stack->st_a[i - 1];
			stack->st_a[i - 1] = stack->st_a[i];
			stack->st_a[i] = aux;
			i++;
		}
	}
}
