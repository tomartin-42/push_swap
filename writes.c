/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   writes.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tomartin <tomartin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/02 19:35:12 by tomartin          #+#    #+#             */
/*   Updated: 2021/08/03 19:53:50 by tomartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	write_error(void)
{
	write (1, "Error\n", 6);
	exit (1);
}

void	print_solution(t_stack *stack)
{
	write (1, stack->solution, ft_strlen (stack->solution));
}
