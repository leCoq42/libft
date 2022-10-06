/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_bzero.c                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: mhaan <mhaan@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/06 14:22:18 by mhaan         #+#    #+#                 */
/*   Updated: 2022/10/06 14:49:05 by mhaan         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include	<stdlib.h>

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*ptr;

	ptr = (unsigned char *) s;
	while (n-- > 0)
		*ptr++ = '\0';
}

#include <stdio.h>
#include <string.h>
int main(void)
{
    char str[50] = "0123456789";
    printf("\nBefore bzero(): %s\n", str);
	bzero(str, 1);
    printf("\nAfter bzero(): %s\n", str);
	
    char str2[50] = "0123456789";
    printf("\nBefore bzero(): %s\n", str2);
	ft_bzero(str, 5);
	printf("\nAfter ft_bzero(): %s\n", str2);

    return 0;
}