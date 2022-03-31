/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long_bonus_utils2.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sriyani <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 20:44:07 by sriyani           #+#    #+#             */
/*   Updated: 2022/03/30 20:44:12 by sriyani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long_bonus.h"

int	ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	if (to_find[0] == '\0')
	{
		return (0);
	}
	i = 0;
	while (str[i] != '\0')
	{
		j = 0;
		while (to_find[j] == str[i + j])
		{
			if (to_find[j + 1] == '\0')
			{
				return (1);
			}
			j++;
		}
		i++;
	}
	return (0);
}

static int	ft_lenght(int n)
{
	long	len;
	long	num;

	len = 0;
	num = n;
	if (n < 0)
	{
		num = num * (-1);
		len++;
	}
	while (num > 0)
	{
		num /= 10;
		len++;
	}
	return (len);
}

char	*ft_zero(char *p)
{
	p = NULL;
	p = malloc(2 * sizeof(char));
	p[0] = '0';
	p[1] = '\0';
	return (p);
}

char	*ft_itoa(int n)
{
	char		*ptr;
	long int	num;
	long int	len;

	ptr = NULL;
	len = ft_lenght(n);
	if (n == 0)
		return (ft_zero(ptr));
	ptr = malloc ((len + 1) * sizeof(char));
	if (!ptr)
		return (NULL);
	ptr[len] = '\0';
	num = n;
	if (n < 0)
	{
		ptr[0] = '-';
		num = num * (-1);
	}
	while (len-- > 0 && num > 0)
	{
		ptr[len] = num % 10 + '0';
		num = num / 10;
	}
	return (ptr);
}

int	ft_mouse_hook(t_vars *vars)
{
	mlx_destroy_image(vars->mlx_ptr, vars->mlx_win);
	exit(0);
}
