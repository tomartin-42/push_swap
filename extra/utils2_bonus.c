/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils2_bonus.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tomartin <tomartin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/02 19:43:20 by tomartin          #+#    #+#             */
/*   Updated: 2021/08/04 18:16:46 by tomartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker_bonus.h"

int	ft_strcmp(const char *s1, const char *s2)
{
	int	res;

	res = 0;
	while ((*s1 || *s2))
	{
		res = (unsigned char)*s1 - (unsigned char)*s2;
		if (res != 0)
			return (res);
		s1++;
		s2++;
	}
	return (res);
}

char	*ft_strjoin_nf(char *s1, char const *s2)
{
	int		i;
	int		j;
	char	*p;

	if (!s1 || !s2)
		return (NULL);
	i = ft_strlen(s1) + ft_strlen(s2);
	p = malloc(i + 1);
	if (!p)
		return (NULL);
	i = 0;
	j = 0;
	while (s1[j] != '\0')
	{
		p[j] = s1[j];
		j++;
	}
	while (s2[i] != '\0')
		p[j++] = s2[i++];
	p[j] = '\0';
	return (p);
}

//Check if stack->st_a is in order
int	check_is_order_correct(t_stack *stack)
{
	int	i;

	i = 1;
	if (stack->b_end != 0)
		return (0);
	while (i <= stack->st_max - 1)
	{
		if (stack->st_a[i - 1] > stack->st_a[i])
			return (0);
		i++;
	}
	return (1);
}

void	free_stacks(t_stack *stack)
{
	free (stack->st_a);
	free (stack->st_b);
	free (stack->aux_stack);
	free (stack->solution);
}
