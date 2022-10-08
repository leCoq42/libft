/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memmove.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: mhaan <mhaan@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/08 15:03:01 by mhaan         #+#    #+#                 */
/*   Updated: 2022/10/08 17:13:53 by mhaan         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include	"headers.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	const char	*s = (const char *)src;
	char		*d;
	char		*tmp;
	size_t		i;

	d = (char *)dst;
	tmp = (char *)malloc(sizeof(char) * len);
	i = len;
	while (i-- > 0)
		tmp[i] = s[i];
	i = len;
	while (i-- > 0)
		d[i] = tmp[i];
	free(tmp);
	return (dst);
}

/* #include	<stdio.h>
#include	<string.h>
int main(void)
{
	char csrc[100] = "Geeksfor";
	memmove(csrc+5, csrc, ft_strlen(csrc)+1);
	printf("%s\n", csrc);
	
	char csrc2[100] = "Geeksfor";
	ft_memmove(csrc2+5, csrc2, ft_strlen(csrc2)+1);
	printf("%s\n", csrc2);
	return 0;
} */