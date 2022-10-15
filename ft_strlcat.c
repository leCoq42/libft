/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strlcat.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: mhaan <mhaan@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/10 10:26:48 by mhaan         #+#    #+#                 */
/*   Updated: 2022/10/15 16:16:10 by mhaan         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include	"libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	srclen;
	size_t	dstlen;
	size_t	i;

	srclen = ft_strlen(src);
	dstlen = ft_strlen(dst);
	if (dstlen >= dstsize)
		return (dstsize + srclen);
	i = 0;
	while (i < srclen && i < (dstsize - dstlen - 1))
	{
		dst[dstlen + i] = src[i];
		i++;
	}
	dst[dstlen + i] = '\0';
	return (dstlen + srclen);
}

/* #include <stdio.h>
#include <string.h>
int	main(void)
{
	char src[] = "Dit is een testzin!";
	char dst[30] = "Hallo, ";

	printf("Length: %lu, strlcat: %s\n", strlcat(dst, src, 28), dst);
	
	char dst2[30] = "Hallo, ";
	printf("Length: %lu, ft_strlcat: %s\n", ft_strlcat(dst2, src, 28), dst2);
} */