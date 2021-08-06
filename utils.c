/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tomartin <tomartin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/02 19:35:18 by tomartin          #+#    #+#             */
/*   Updated: 2021/08/02 19:35:19 by tomartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i] && s[i] != (char)c)
		i++;
	if (s[i] == (char)c)
		return ((char *)&s[i]);
	return (NULL);
}

size_t	ft_strlen(const char *str)
{
	size_t	a;

	a = 0;
	while (str[a] != '\0')
		a++;
	return (a);
}

int	ft_isdigit(int c)
{
	int	resp;

	resp = 1;
	if (c < '0' || c > '9')
		resp = 0;
	return (resp);
}

char	*ft_strdup(const char *s)
{
	char	*p;
	int		i;

	i = 0;
	while (s[i])
		i++;
	p = (char *)malloc (i + 1);
	if (!p)
		return (NULL);
	i = 0;
	while (s[i])
	{
		p[i] = s[i];
		i++;
	}
	p[i] = '\0';
	return (p);
}

char	*ft_strjoin(char *s1, char const *s2)
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
	free (s1);
	return (p);
}
