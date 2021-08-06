/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker_bonus.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tomartin <tomartin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/04 18:24:56 by tomartin          #+#    #+#             */
/*   Updated: 2021/08/04 18:25:17 by tomartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHECKER_BONUS_H
# define CHECKER_BONUS_H

# include <stdio.h>
# include <unistd.h>
# include <stdlib.h>
# include <fcntl.h>

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 1
# endif

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

void		check_main(int argc, char **argv);
void		check_correct_characters(int argc, char **argv);
void		check_no_more_one_space(int argc, char **argv);
void		check_no_number_replay(t_stack *stack);
void		check_empy_arguments(int argc);
void		initialize_stacks(t_stack *stack);

t_stack		size_stack(int argc, char **argv);
t_stack		copy_to_stack_a(int argc, char **argv, t_stack *stack);
void		get_arg_singel(char **number, int *j, t_stack *stack);

void		make_space_in_a(t_stack *stack);
void		make_space_in_b(t_stack *stack);
void		quit_upper_in_b(t_stack *stack);
void		quit_upper_in_a(t_stack *stack);

long int	ft_atoi(const char *str);
char		**ft_split(char const *s, char c);
int			ft_isdigit(int c);

void		write_error(void);

char		*ft_strchr(const char *s, int c);
char		*ft_strdup(const char *s);
int			get_next_line(int fd, char **line);
char		*ft_strjoin(char *s1, char const *s2);
char		*ft_strjoin_nf(char *s1, char const *s2);
size_t		ft_strlen(const char *s);
char		*ft_substr(char const *s, unsigned int start, size_t len);
int			ft_strcmp(const char *s1, const char *s2);
int			check_is_order_correct(t_stack *stack);

void		read_moves(t_stack *st);
int			check_moves(char *move);
void		do_move(char *move, t_stack *stack);

void		free_stacks(t_stack *stack);

#endif