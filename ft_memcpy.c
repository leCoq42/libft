/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memcpy.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: mhaan <mhaan@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/07 16:54:29 by mhaan         #+#    #+#                 */
/*   Updated: 2022/12/22 15:57:53 by mhaan         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include	"libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	const char	*stmp = (const char *)src;
	char		*dtmp;

	if (!dst && !src)
		return (0);
	dtmp = (char *)dst;
	while (n-- > 0)
		dtmp[n] = stmp[n];
	return (dtmp);
}
