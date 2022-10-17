/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strtrim.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: mhaan <mhaan@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/17 13:51:18 by mhaan         #+#    #+#                 */
/*   Updated: 2022/10/17 15:02:28 by mhaan         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include	"libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*mem;
	size_t	start;
	size_t	end;
	
	start = 0;
	end = ft_strlen(s1);
	while (s1[start] && ft_strchr(set, s1[start]))
		start++;
	while (ft_strchr(set, s1[end]))
		end--;
	mem = f
	
}