/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tomartin <tomartin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/02 19:35:46 by tomartin          #+#    #+#             */
/*   Updated: 2021/08/04 19:21:36 by tomartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>
# include <stdio.h>
# include <stdlib.h>

typedef struct s_stack{
	long int	*st_a;
	long int	*st_b;
	long int	*aux_stack;
	int			st_max;
	int			a_end;
	int			b_end;
	char		*solution;
	int			parts_init;
	int			parts_end;
	int			midel;
	long int	**fct;
	long int	to_move[2];
	long int	cd[2];
	long int	midel_a;
	long int	midel_b;
}	t_stack;

# define EMPY	9999999999999999

void		check_main(int argc, char **argv);
void		freedom(t_stack *stack);

void		check_empy_arguments(int argc);
void		check_correct_characters(int argc, char **argv);
void		check_no_more_one_space(int argc, char **argv);
void		check_no_number_replay(t_stack *stack);

void		write_error(void);
void		print_solution(t_stack *stack);

t_stack		size_stack(int argc, char **argv);
t_stack		copy_to_stack_a(int argc, char **argv, t_stack *stack);
void		initialize_stacks(t_stack *stack);
void		initialize_aux_stack(t_stack *stack);
void		can_do_ss(t_stack *stack);
int			can_do_rr(t_stack *stack);
int			can_do_rrr(t_stack *stack);
int			check_is_order_correct(t_stack *stack);
void		get_arg_singel(char **number, int *j, t_stack *stack);

char		*ft_strdup(const char *s);
char		*ft_strjoin(char *s1, char const *s2);
char		*ft_strchr(const char *s, int c);
long int	ft_atoi(const char *str);
char		**ft_split(const char *s, char c);
size_t		ft_strlen(const char *str);
int			ft_isdigit(int c);

void		do_sa(t_stack *stack);
void		do_sb(t_stack *stack);
void		do_ss(t_stack *stack);
void		do_pa(t_stack *stack);
void		do_pb(t_stack *stack);
void		do_ra(t_stack *stack);
void		do_rb(t_stack *stack);
void		do_rr(t_stack *stack);
void		do_rra(t_stack *stack);
void		do_rrb(t_stack *stack);
void		do_rrr(t_stack *stack);

void		make_space_in_a(t_stack *stack);
void		make_space_in_b(t_stack *stack);
void		quit_upper_in_a(t_stack *stack);
void		quit_upper_in_b(t_stack *stack);

int			check_order_a(t_stack *stack);
int			check_order_b(t_stack *stack);
int			check_order_ab(t_stack *stack);
void		aux_stack_order(t_stack *stack);

void		main_logic(t_stack *stack);
void		calculate_midel_ab(t_stack *stack);

void		main_magic_logic(t_stack *stack);
int			search_num_in_parts_top(t_stack *stack);
int			search_num_in_parts_end(t_stack *stack);
void		main_logic_finish(t_stack *stack);
void		logic_iteration(t_stack *stack, int y, int x);

void		midelacction_pass_b(t_stack *stack);
void		midelacction_pass_a(t_stack *stack);
int			finish_do_a(t_stack *stack);
int			finish_do_b(t_stack *stack);

void		move_to_stack_a(t_stack *stack, int i, int j);
void		move_to_stack_b(t_stack *stack, int i, int j);

void		logic_order_tree(t_stack *stack);
void		case_tree(t_stack *stack);
void		case_four(t_stack *stack);
void		case_five(t_stack *stack);

void		free_double_ptr(char **s);
void		free_stacks(t_stack *stack);

#endif
