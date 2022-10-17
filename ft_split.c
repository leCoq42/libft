/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_split.c                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: mhaan <mhaan@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/17 16:24:46 by mhaan         #+#    #+#                 */
/*   Updated: 2022/10/17 18:23:41 by mhaan         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include	"libft.h"

char	**ft_split(char const *s, char c)
{
	char	**arr;
	size_t	i;
	size_t	start;
	size_t	end;
	size_t	count;

	count = 0;
	while (*s)
	{
		while (*s == c)
			s++;
		if (*s)
			count++;
		while(*s != c && *s)
			s++;
	}
	arr = (char **)malloc((count + 1) * sizeof(char *));
	if (!arr)
		return (0);
	i = 0;
	start = 0;
	end = 0;
	while (i < count + 1)
	{
		while (s[end] && s[end] != c)
			end++;
		arr[i] = ft_substr(s, start, end - start + 1);
		i++;
		start = end;
	}
	return (arr);
}
