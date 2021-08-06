/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tomartin <tomartin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/02 19:36:16 by tomartin          #+#    #+#             */
/*   Updated: 2021/08/03 19:33:19 by tomartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	check_order_stack(t_stack *stack)
{
	if (check_is_order_correct (stack))
	{
		free_stacks (stack);
		exit (0);
	}
}

static void	logic_num_number(t_stack *stack)
{
	if (stack->a_end == 1)
	{
		free_stacks (stack);
		exit (0);
	}
	else if (stack->st_max == 2)
	{
		if (stack->st_a[0] > stack->st_a[1])
		{
			do_ra (stack);
			print_solution (stack);
			free_stacks (stack);
			exit (0);
		}
	}
	else if (stack->st_max == 3)
		case_tree (stack);
	else if (stack->st_max == 4)
		case_four (stack);
	else if (stack->st_max == 5)
		case_five (stack);
}

int	main(int argc, char **argv)
{
	t_stack	stack;

	check_main (argc, argv);
	stack = size_stack (argc, argv);
	stack = copy_to_stack_a (argc, argv, &stack);
	check_no_number_replay (&stack);
	aux_stack_order (&stack);
	check_order_stack (&stack);
	logic_num_number (&stack);
	main_logic (&stack);
	main_logic_finish (&stack);
	print_solution (&stack);
	free_stacks (&stack);
}
