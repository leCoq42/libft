/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_substr.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: mhaan <mhaan@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/15 14:06:04 by mhaan         #+#    #+#                 */
/*   Updated: 2023/05/11 18:03:17 by mhaan         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include	"libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	const size_t	slen = ft_strlen(s);
	char			*mem;

	if (start > slen)
	{
		len = 0;
		start = 0;
	}
	else if (len > (slen - start))
		len = slen - start;
	mem = (char *)malloc((len + 1) * sizeof(char));
	if (!mem)
		return (NULL);
	ft_strlcpy(mem, s + start, len + 1);
	return (mem);
}
