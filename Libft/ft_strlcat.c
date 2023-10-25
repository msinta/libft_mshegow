/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strlcat.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: mshegow <mshegow@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/06 12:37:25 by mshegow       #+#    #+#                 */
/*   Updated: 2023/10/24 11:45:58 by mshegow       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	strncat(char *dest, const char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	dest_i;

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
	return (*dest);
}

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	dest_len;
	size_t	src_len ;
	size_t	remaining_space;

	dest_len = ft_strlen(dest);
	src_len = ft_strlen(src);
	if (size <= dest_len)
	{
		return (size + src_len);
	}
	remaining_space = size - dest_len - 1;
	if (src_len < remaining_space)
	{
		strncat(dest + dest_len, src, src_len);
	}
	else
	{
		strncat(dest + dest_len, src, remaining_space);
	}
	return (dest_len + src_len);
}
