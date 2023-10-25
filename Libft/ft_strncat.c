/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strncat.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: mshegow <mshegow@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/06 18:10:44 by mshegow       #+#    #+#                 */
/*   Updated: 2023/10/24 11:29:07 by mshegow       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *dest, char *src, size_t nb)
{
	size_t	i;
	size_t	dest_i;

	i = 0;
	dest_i = 0;
	while (dest[dest_i] != '\0')
	{
		dest_i++;
	}
	while (i < nb)
	{
		dest[dest_i] = src[i];
		dest_i++;
		i++;
	}
	dest[dest_i] = '\0';
	return (dest);
}
