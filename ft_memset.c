/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memset.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: mhaan <marvin@codam.nl>                      +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/06 11:33:05 by mhaan         #+#    #+#                 */
/*   Updated: 2022/10/07 16:47:45 by mhaan         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include	"headers.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned int	i;
	unsigned char	*tmp;

	tmp = (unsigned char *)b;
	i = 0;
	while (i++ < len)
		tmp[i - 1] = c;
	return (b);
}

/* #include <stdio.h>
#include <string.h>

int main(void)
{
    char str[50] = "GeeksForGeeks is for programming geeks.";
    printf("\nBefore memset(): %s\n", str);

    // Fill 8 characters starting from str[13] with '.'
    printf("\nAfter memset(): %s\n", memset(str + 13, '.', 2*sizeof(char)));
	printf("\nAfter ft_memset(): %s\n", ft_memset(str + 13, '.', 2*sizeof(char)));

    return 0;
} */