/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_itoa.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: mshegow <mshegow@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/13 19:02:10 by mshegow       #+#    #+#                 */
/*   Updated: 2023/10/19 18:25:03 by mshegow       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_len(int nbr)
{
	int	len;

	len = 0;
	if (nbr <= 0)
	{
		len = 1;
	}
	else
	{
		len = 0;
	}
	while (nbr != 0)
	{
		nbr = nbr / 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	unsigned int	nbr;
	int				sign;
	int				len;
	char			*str_num;

	nbr = n;
	sign = 0;
	if (n < 0)
		sign = 1;
	len = ft_len(n);
	if (n < 0)
		nbr = -n;
	str_num = malloc(sizeof(char) * len + 1);
	if (str_num == NULL)
		return (NULL);
	str_num[len--] = '\0';
	while (len >= 0)
	{
		str_num[len] = nbr % 10 + '0';
		nbr /= 10;
		len--;
	}
	if (sign == 1)
		str_num[0] = '-';
	return (str_num);
}
