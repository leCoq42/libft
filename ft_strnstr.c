/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strnstr.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: mhaan <mhaan@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/14 12:47:14 by mhaan         #+#    #+#                 */
/*   Updated: 2022/10/14 17:13:49 by mhaan         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include	"libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	nlen;
	char	*ptr;

	i = 0;
	ptr = (char *)haystack;
	nlen = ft_strlen(needle);
	if (nlen == 0)
		return (ptr);
	while (i < (len - nlen + 1) && ptr[i] && len >= nlen)
	{
		if (ft_strncmp(&ptr[i], needle, nlen) == 0)
			return (&ptr[i]);
		else
			i++;
	}
	return (0);
}
