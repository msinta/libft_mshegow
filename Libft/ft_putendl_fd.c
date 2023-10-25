/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_putendl_fd.c                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: mshegow <mshegow@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/16 15:00:00 by mshegow       #+#    #+#                 */
/*   Updated: 2023/10/17 16:49:30 by mshegow       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char const *s, int fd)
{
	char	newline;

	write(fd, s, ft_strlen(s));
	newline = '\n';
	write(fd, &newline, 1);
}
