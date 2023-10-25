/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strstr.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: mshegow <mshegow@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/06 18:13:42 by mshegow       #+#    #+#                 */
/*   Updated: 2023/10/24 11:29:38 by mshegow       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(char *str, char *to_find)
{
	int	res;
	int	temp;

	res = 0;
	temp = 0;
	if (to_find[0] == '\0')
		return (str);
	while (str[res] != '\0')
	{
		temp = 0;
		while (str[res + temp] == to_find[temp] && to_find[temp] != '\0')
			temp++;
		if (to_find[temp] == '\0')
			return (&str[res]);
		res++;
	}
	return (NULL);
}
