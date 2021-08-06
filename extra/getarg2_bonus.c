/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   getarg2_bonus.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tomartin <tomartin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/02 19:37:03 by tomartin          #+#    #+#             */
/*   Updated: 2021/08/04 18:16:46 by tomartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker_bonus.h"

void	get_arg_singel(char **number, int *j, t_stack *stack)
{
	int	h;

	h = 0;
	while (number[h] != '\0')
	{
		stack->st_a[*j] = ft_atoi (number[h]);
		*j = *j + 1;
		free (number[h]);
		h++;
	}
	free (number);
}
