/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stackutils_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tomartin <tomartin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/02 19:43:10 by tomartin          #+#    #+#             */
/*   Updated: 2021/08/04 18:16:46 by tomartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker_bonus.h"

//Print the stack_a. Use to comprobate
void	print_stack(t_stack *stack)
{
	int	i;

	i = 0;
	while (i < stack->st_max)
	{
		printf ("%17ld\n", stack->st_a[i]);
		i++;
	}
}

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
