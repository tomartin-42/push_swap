/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   moves1.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tomartin <tomartin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/02 19:36:06 by tomartin          #+#    #+#             */
/*   Updated: 2021/08/02 19:36:09 by tomartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	do_sa(t_stack *stack)
{
	long int	aux;

	if (stack->st_a[0] == EMPY || stack->st_a[1] == EMPY)
		;
	else
	{
		aux = stack->st_a[0];
		stack->st_a[0] = stack->st_a[1];
		stack->st_a[1] = aux;
		stack->solution = ft_strjoin (stack->solution, "sa\n");
	}
}

void	do_sb(t_stack *stack)
{
	long int	aux;

	if (stack->st_b[0] == EMPY || stack->st_b[1] == EMPY)
		;
	else
	{
		aux = stack->st_b[0];
		stack->st_b[0] = stack->st_b[1];
		stack->st_b[1] = aux;
		stack->solution = ft_strjoin (stack->solution, "sb\n");
	}
}

void	do_ss(t_stack *stack)
{
	long int	aux;

	if (stack->st_a[0] == EMPY || stack->st_a[1] == EMPY)
		;
	else if (stack->st_b[0] == EMPY || stack->st_b[1] == EMPY)
		;
	else
	{
		aux = stack->st_a[0];
		stack->st_a[0] = stack->st_a[1];
		stack->st_a[1] = aux;
		aux = stack->st_b[0];
		stack->st_b[0] = stack->st_b[1];
		stack->st_b[1] = aux;
		stack->solution = ft_strjoin (stack->solution, "ss\n");
	}
}
