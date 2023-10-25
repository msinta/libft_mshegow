/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strdup.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: mshegow <mshegow@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/10 14:17:17 by mshegow       #+#    #+#                 */
/*   Updated: 2023/10/17 16:45:36 by mshegow       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	size_t	length;
	char	*ps1;

	length = ft_strlen(s1);
	ps1 = (char *)malloc(sizeof(char) * (length + 1));
	if (ps1 == NULL)
		return (NULL);
	ft_strlcpy(ps1, s1, length + 1);
	return (ps1);
}
