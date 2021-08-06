/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checks.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tomartin <tomartin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/02 19:37:17 by tomartin          #+#    #+#             */
/*   Updated: 2021/08/04 19:27:01 by tomartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	check_main(int argc, char **argv)
{
	check_empy_arguments (argc);
	check_correct_characters (argc, argv);
	check_no_more_one_space (argc, argv);
}

//chec if empy arguments
void	check_empy_arguments(int argc)
{
	if (argc == 1)
		exit(0);
}

//chec if don't have correct characters and operators
void	check_correct_characters(int argc, char **argv)
{
	int	i;
	int	j;

	i = 1;
	while (i < argc)
	{
		j = 0;
		while (argv[i][j] != '\0')
		{
			if (!ft_strchr ("0123456789 ", argv[i][j]))
			{
				if (ft_strchr ("+-", argv[i][j]) && ft_isdigit (argv[i][j + 1]))
				{
					if (ft_isdigit (argv[i][j - 1]) && (j - 1) > 0)
						write_error ();
					j++;
				}
				else
					write_error ();
			}
			else
				j++;
		}
		i++;
	}
}

// check if 2 spaces consecutives
void	check_no_more_one_space(int argc, char **argv)
{
	int	i;
	int	j;

	i = 1;
	while (i < argc)
	{
		j = 0;
		if (ft_strlen (argv[i]) == 1 && argv[i][j] == ' ')
			write_error ();
		while (argv[i][j] != '\0')
		{
			if (ft_strchr (" ", argv[i][j]))
			{
				if (argv[i][j + 1] == ' ')
					write_error();
			}
			j++;
		}
		i++;
	}
}

// Check if the stack have a duplicate number
void	check_no_number_replay(t_stack *stack)
{
	int	i;
	int	j;
	int	flag;

	i = 0;
	while (i < stack->st_max)
	{
		j = 0;
		flag = 0;
		while (j < stack->st_max)
		{
			if (stack->st_a[i] == stack->st_a[j])
				flag++;
			if (flag > 1)
				write_error ();
			j++;
		}	
		i++;
	}
}
