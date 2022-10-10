/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strlcat.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: mhaan <mhaan@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/10 10:26:48 by mhaan         #+#    #+#                 */
/*   Updated: 2022/10/10 11:26:01 by mhaan         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include	"headers.h"

size_t	ft_strlcat(char *restrict dst, const char *restrict src, size_t dstsize)
{
	size_t	dstlen;
	size_t	srclen;
	size_t	n;

	dstlen = ft_strlen(dst);
	srclen = ft_strlen(src);
	n = dstlen;
	while (*src && (dstsize - n) > 1)
		dst[n++] = *src++;
	dst[n] = 0;
	return (dstlen + srclen);
}

#include <stdio.h>
#include <string.h>
int	main(void)
{
	char src[] = "Dit is een testzin!";
	char dst[30] = "Hallo, ";

	printf("Length: %lu, strlcat: %s\n", strlcat(dst, src, 28), dst);
	
	char dst2[30] = "Hallo, ";
	printf("Length: %lu, ft_strlcat: %s\n", ft_strlcat(dst2, src, 28), dst2);
}