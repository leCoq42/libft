/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memmove.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: mhaan <mhaan@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/08 15:03:01 by mhaan         #+#    #+#                 */
/*   Updated: 2022/10/17 13:26:55 by mhaan         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include	"libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	const char	*s = (const char *)src;
	char		*d;
	size_t		i;

	d = (char *)dst;
	if (!s && !d)
		return (0);
	if (dst > src)
	{
		while (len-- > 0)
			d[len] = s[len];
	}
	else
	{
		i = 0;
		while (i < len)
		{
			d[i] = s[i];
			i++;
		}
	}
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