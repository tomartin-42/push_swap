/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils_bonus.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tomartin <tomartin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/20 18:16:06 by tomartin          #+#    #+#             */
/*   Updated: 2021/08/04 18:16:46 by tomartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker_bonus.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*p;
	size_t	i;
	size_t	j;

	i = 0;
	if (!s)
		return (NULL);
	j = ft_strlen(s);
	if (j < len)
		p = malloc (sizeof (char) * (j + 1));
	else
		p = malloc (sizeof (char) * (len + 1));
	if (!p)
		return (NULL);
	if (j >= start)
	{
		while (i < len && s[start])
			p[i++] = s[start++];
		p[i] = '\0';
	}
	return (p);
}
