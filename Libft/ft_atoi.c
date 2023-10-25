/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_atoi.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: mshegow <mshegow@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/06 12:44:30 by mshegow       #+#    #+#                 */
/*   Updated: 2023/10/19 13:37:29 by mshegow       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	isspace(int c)
{
	if (c == ' ' || c == '\t' || c == '\n'
		|| c == '\r' || c == '\f' || c == '\v')
	{
		return (1);
	}
	return (0);
}

static int	check(int c)
{
	if ((c >= '0') && (c <= '9'))
	{
		return (1);
	}
	return (0);
}

int	ft_atoi(const char *str)
{
	int	i;
	int	sign;
	int	results;

	sign = 1;
	i = 0;
	results = 0;
	while (isspace(str[i]))
	{
		i++;
	}
	if (str[i] == '-')
	{
		sign *= -1;
	}
	if (str[i] == '+' || str[i] == '-')
	{
		i++;
	}
	while (check(str[i]))
	{
		results = results * 10 + (str[i] - '0');
		i++;
	}
	return (sign * results);
}
