/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memcpy.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: mhaan <mhaan@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/07 16:54:29 by mhaan         #+#    #+#                 */
/*   Updated: 2022/10/08 17:04:10 by mhaan         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include	"headers.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	const char		*stmp = (const char *)src;
	char			*dtmp;

	dtmp = (char *)dst;
	while (n-- > 0)
		dtmp[n] = stmp[n];
	return (dst);
}

/* #include	<stdio.h>
#include	<string.h>
int	main(void)
{
	char src[] = "123a";
	char dst[] = "456b";

	ft_memcpy(dst, src, 1);
	printf("ft_memcpy: %s\n", dst);

	char dst2[] = "456b";
	
	memcpy(dst2, src, 1);
	printf("memcpy: %s\n", dst2);

} */