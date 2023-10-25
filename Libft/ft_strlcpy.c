/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strlcpy.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: mshegow <mshegow@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/06 18:10:22 by mshegow       #+#    #+#                 */
/*   Updated: 2023/10/19 17:33:05 by mshegow       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strlcpy(char *dest, const char *src, size_t size)
{
	unsigned int	i;
	unsigned int	src_length;

	i = 0;
	src_length = 0;
	if (size == 0)
	{
		while (src[src_length] != '\0')
		{
			src_length++;
		}
		return (src_length);
	}
	while (i < size - 1 && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	while (src[src_length] != '\0')
	{
		src_length++;
	}
	return (src_length);
}
