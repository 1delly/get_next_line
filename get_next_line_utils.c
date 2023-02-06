/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: theodelgrange <theodelgrange@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 11:50:54 by tdelgran          #+#    #+#             */
/*   Updated: 2023/02/03 14:22:36 by theodelgran      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

size_t	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*titi;
	int		i;

	if (!s1 || !s2)
		return (0);
	titi = malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (!titi)
		return (0);
	i = 0;
	while (*s1 != '\0')
	{
		titi[i] = *s1;
		s1++;
		i++;
	}
	while (*s2 != '\0')
	{
		titi[i] = *s2;
		s2++;
		i++;
	}
	titi[i] = '\0';
	return (titi);
}
