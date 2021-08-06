/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tomartin <tomartin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/02 19:42:40 by tomartin          #+#    #+#             */
/*   Updated: 2021/08/04 18:16:46 by tomartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker_bonus.h"

void	do_move(char *move, t_stack *stack)
{	
	if (!ft_strcmp (move, "sa\n"))
		do_sa (stack);
	if (!ft_strcmp (move, "sb\n"))
		do_sb (stack);
	if (!ft_strcmp (move, "ss\n"))
		do_ss (stack);
	if (!ft_strcmp (move, "pa\n"))
		do_pa (stack);
	if (!ft_strcmp (move, "pb\n"))
		do_pb (stack);
	if (!ft_strcmp (move, "ra\n"))
		do_ra (stack);
	if (!ft_strcmp (move, "rb\n"))
		do_rb (stack);
	if (!ft_strcmp (move, "rr\n"))
		do_rr (stack);
	if (!ft_strcmp (move, "rra\n"))
		do_rra (stack);
	if (!ft_strcmp (move, "rrb\n"))
		do_rrb (stack);
	if (!ft_strcmp (move, "rrr\n"))
		do_rrr (stack);
}

int	check_moves(char *move)
{
	int	answ;

	answ = 0;
	if (!ft_strcmp (move, "sa\n") || !ft_strcmp (move, "sb\n"))
		answ = 1;
	if (!ft_strcmp (move, "ss\n"))
		answ = 1;
	if (!ft_strcmp (move, "pa\n") || !ft_strcmp (move, "pb\n"))
		answ = 1;
	if (!ft_strcmp (move, "ra\n") || !ft_strcmp (move, "rb\n"))
		answ = 1;
	if (!ft_strcmp (move, "rr\n"))
		answ = 1;
	if (!ft_strcmp (move, "rra\n") || !ft_strcmp (move, "rrb\n"))
		answ = 1;
	if (!ft_strcmp (move, "rrr\n"))
		answ = 1;
	return (answ);
}

void	read_moves(t_stack *st)
{
	char	*move;

	while (get_next_line (0, &move))
	{
		move = ft_strjoin (move, "\n");
		if (! check_moves (move))
			write_error ();
		do_move (move, st);
	}
}

int	main(int argc, char **argv)
{
	t_stack	stack;
	int		i;

	check_main (argc, argv);
	stack = size_stack (argc, argv);
	stack = copy_to_stack_a (argc, argv, &stack);
	check_no_number_replay (&stack);
	read_moves (&stack);
	if (check_is_order_correct (&stack))
		write (1, "OK\n", 3);
	else
		write (1, "KO\n", 3);
	free_stacks (&stack);
}
