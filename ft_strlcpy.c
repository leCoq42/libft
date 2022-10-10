/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strlcpy.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: mhaan <mhaan@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/08 17:14:24 by mhaan         #+#    #+#                 */
/*   Updated: 2022/10/10 13:54:29 by mhaan         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include	"libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;

	i = 0;
	while (src[i] && dstsize > 1)
	{
		dst[i] = src[i];
		i++;
		dstsize--;
	}
	dst[i] = 0;
	return (ft_strlen(src));
}

#include <stdio.h>
#include <string.h>
int	main(void)
{
	char str[] = "Dit is een testzin!";
	char buff[19];

	printf("Length: %lu, Buff: %s\n", strlcpy(buff, str, 3), buff);
	return (0);
}