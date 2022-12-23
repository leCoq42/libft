/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strchr.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: martin <martin@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/09 15:08:46 by martin        #+#    #+#                 */
/*   Updated: 2022/12/23 17:03:24 by mhaan         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include	"libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	*nstr;

	nstr = (char *)s;
	while (*nstr && *nstr != (char)c)
		nstr++;
	if (*nstr == (char)c)
		return (nstr);
	return (0);
}
