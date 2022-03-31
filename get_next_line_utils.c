/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sriyani <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 21:01:19 by sriyani           #+#    #+#             */
/*   Updated: 2022/03/30 21:01:26 by sriyani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long_bonus.h"

size_t	ft_strlen(char *str)
{
	size_t	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int	ft_strchr(char *s, int c)
{
	while (*s)
	{
		if (*s == (char) c)
			return (1);
		s++;
	}
	return (0);
}

char	*ft_strjoin(char *s1, char *s2)
{
	char	*ptr;
	int		i;
	int		j;
	int		k;

	i = 0;
	j = 0;
	k = 0;
	if (!s1)
	{
		s1 = malloc (sizeof(char) * 1);
		s1[0] = '\0';
	}
	if (!s1 && !s2)
		return (NULL);
ptr = (char *) malloc((ft_strlen (s1) + ft_strlen (s2) + 1) * sizeof(char));
	if (!ptr)
		return (NULL);
	while (s1[k])
	ptr[i++] = s1[k++];
	while (s2[j])
	ptr[i++] = s2[j++];
	ptr[i] = '\0';
	free(s1);
	return (ptr);
}
