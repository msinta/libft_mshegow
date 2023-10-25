/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strtrim.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: mshegow <mshegow@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/10 15:26:09 by mshegow       #+#    #+#                 */
/*   Updated: 2023/10/17 16:47:34 by mshegow       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	is_in_set(char x, char const *set)
{
	while (*set)
	{
		if (x == *set)
			return (1);
		set++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t			start;
	size_t			end;

	if (!s1 || !set)
		return (0);
	start = 0;
	while (s1[start] && is_in_set(s1[start], set))
		start++;
	end = ft_strlen(s1);
	while (end > start && is_in_set(s1[end - 1], set))
		end--;
	if (start >= end)
	{
		return (ft_strdup(""));
	}
	return (ft_substr(s1, start, (end - start)));
}
