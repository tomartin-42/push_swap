/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_bonus.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tomartin <tomartin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/21 09:46:41 by tomartin          #+#    #+#             */
/*   Updated: 2021/08/04 18:16:52 by tomartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker_bonus.h"
#include <limits.h>

long int	ft_atoi(const char *str)
{
	int			i;
	int			neg;
	long long	resp;

	i = 0;
	resp = 0;
	neg = 1;
	while (str[i] == ' ' || (9 <= str[i] && str[i] <= 13))
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			neg = -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		resp = resp * 10 + str[i] - '0';
		i++;
		if ((resp * neg) > INT_MAX)
			write_error();
		if ((resp * neg) < INT_MIN)
			write_error();
	}
	return (resp * neg);
}
