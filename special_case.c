/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   special_case.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tomartin <tomartin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/02 19:35:39 by tomartin          #+#    #+#             */
/*   Updated: 2021/08/03 19:34:19 by tomartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

//Brute force for case 3 numbers
void	case_tree(t_stack *sta)
{
	logic_order_tree (sta);
	print_solution (sta);
	free_stacks (sta);
	exit (0);
}

//For four elements
void	case_four(t_stack *sta)
{
	if (sta->st_a[0] == sta->aux_stack[0])
		;
	else if (sta->st_a[1] == sta->aux_stack[0])
		do_ra (sta);
	else if (sta->st_a[2] == sta->aux_stack[0])
	{
		do_ra (sta);
		do_ra (sta);
	}
	else if (sta->st_a[3] == sta->aux_stack[0])
		do_rra (sta);
	do_pb (sta);
	logic_order_tree (sta);
	do_pa (sta);
	print_solution (sta);
	free_stacks (sta);
	exit (0);
}

//Five!!! five!!!!!
void	case_five(t_stack *sta)
{
	while (sta->b_end != 2)
	{
		if (sta->st_a[0] < sta->aux_stack[2])
			do_pb (sta);
		else
			do_ra (sta);
	}
	if (sta->st_b[0] < sta->st_b[1])
		do_sb (sta);
	logic_order_tree (sta);
	do_pa (sta);
	do_pa (sta);
	print_solution (sta);
	free_stacks (sta);
	exit (0);
}

void	logic_order_tree(t_stack *sta)
{
	if (sta->st_a[0] > sta->st_a[1] && sta->st_a[1] < sta->st_a[2]
		&& sta->st_a[2] > sta->st_a[0])
		do_sa (sta);
	else if (sta->st_a[0] > sta->st_a[1] && sta->st_a[1] > sta->st_a[2]
		&& sta->st_a[2] < sta->st_a[0])
	{
		do_sa (sta);
		do_rra (sta);
	}
	else if (sta->st_a[0] > sta->st_a[1] && sta->st_a[1] < sta->st_a[2]
		&& sta->st_a[2] < sta->st_a[0])
		do_ra (sta);
	else if (sta->st_a[0] < sta->st_a[1] && sta->st_a[1] > sta->st_a[2]
		&& sta->st_a[2] > sta->st_a[0])
	{
		do_sa (sta);
		do_ra (sta);
	}
	else if (sta->st_a[0] < sta->st_a[1] && sta->st_a[1] > sta->st_a[2]
		&& sta->st_a[2] < sta->st_a[0])
		do_rra (sta);
}
