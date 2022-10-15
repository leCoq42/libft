/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strlcpy.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: mhaan <mhaan@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/08 17:14:24 by mhaan         #+#    #+#                 */
/*   Updated: 2022/10/15 16:21:14 by mhaan         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include	"libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	n;

	i = 0;
	n = dstsize;
	//if (dstlen >= dstsize)
	//	return (dstsize + srclen);
	if (n > 0)
	{
		while (src[i] && n-- > 0)
		{
			dst[i] = src[i];
			i++;
		}
	}
	if (dstsize)
		dst[n - 1] = 0;
	return (i);
}

/* #include <stdio.h>
#include <string.h>
int	main(void)
{
	char str[] = "Dit is een testzin!";
	char buff[19];

	printf("Length: %lu, Buff: %s\n", strlcpy(buff, str, 3), buff);
	return (0);
} */