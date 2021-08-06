/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   freedom.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tomartin <tomartin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/02 19:37:13 by tomartin          #+#    #+#             */
/*   Updated: 2021/08/02 19:37:13 by tomartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	free_double_ptr(char **s)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
	{
		free(s[i]);
		i++;
	}
	free(s);
}

void	free_stacks(t_stack *stack)
{
	free (stack->st_a);
	free (stack->st_b);
	free (stack->aux_stack);
	free (stack->solution);
}
