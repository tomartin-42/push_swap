/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   getarg_bonus.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tomartin <tomartin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/02 19:42:34 by tomartin          #+#    #+#             */
/*   Updated: 2021/08/04 18:16:46 by tomartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker_bonus.h"

static int	get_number_numbers(int argc, char **argv)
{
	int	i;
	int	j;
	int	numbers;

	numbers = 0;
	i = 1;
	while (i < argc)
	{
		j = 0;
		numbers++;
		while (argv[i][j] != '\0')
		{
			if (ft_strchr (" ", argv[i][j]))
				numbers++;
			j++;
		}
		i++;
	}
	return (numbers);
}

// Get an dimension the stacks
t_stack	size_stack(int argc, char **argv)
{
	t_stack	stack;
	int		n_number;

	n_number = get_number_numbers (argc, argv);
	stack.st_a = malloc (sizeof (long int) * n_number);
	stack.st_b = malloc (sizeof (long int) * n_number);
	stack.aux_stack = malloc (sizeof (long int) * n_number);
	stack.st_max = n_number;
	initialize_stacks (&stack);
	return (stack);
}

// Copy to stack the parametres and chec if non MAXINT and MININT
// whit atoi
t_stack	copy_to_stack_a(int argc, char **argv, t_stack *stack)
{
	char	**number;
	int		j;
	int		i;

	i = 1;
	j = 0;
	while (i < argc)
	{
		if (ft_strlen (argv[i]) == 0)
			write_error ();
		number = ft_split (argv[i], ' ');
		if (*number == NULL)
		{
			stack->st_a[j++] = ft_atoi (argv[i]);
			free (*number);
			free (number);
		}
		else
			get_arg_singel (number, &j, stack);
		i++;
	}
	return (*stack);
}

// Put all number of stack in 9999999999999999 EMPY
// and initialice the resolution string
void	initialize_stacks(t_stack *stack)
{
	int	i;

	i = 0;
	while (i < stack->st_max)
	{
		stack->st_a[i] = EMPY;
		stack->st_b[i] = EMPY;
		i++;
	}
	stack->a_end = stack->st_max;
	stack->b_end = 0;
	stack->solution = ft_strdup ("");
	stack->parts_init = 0;
	stack->parts_end = 0;
}

void	initialize_aux_stack(t_stack *stack)
{
	int	i;

	i = 0;
	while (i < stack->st_max)
	{
		stack->aux_stack[i] = stack->st_a[i];
		i++;
	}
}
