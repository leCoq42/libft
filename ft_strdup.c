/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strdup.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: mhaan <mhaan@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/15 13:41:15 by mhaan         #+#    #+#                 */
/*   Updated: 2023/05/11 18:02:57 by mhaan         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include	"libft.h"

char	*ft_strdup(const char *s1)
{
	char			*mem;
	const size_t	s1len = ft_strlen(s1);

	mem = (char *)malloc((s1len + 1) * sizeof(char));
	if (!mem)
		return (0);
	ft_memcpy(mem, s1, s1len + 1);
	return (mem);
}
