/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strlen.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: mhaan <marvin@codam.nl>                      +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/06 11:19:12 by mhaan         #+#    #+#                 */
/*   Updated: 2022/10/10 11:54:19 by mhaan         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "headers.h"

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

/* # include	<stdio.h>
# include	<string.h>
int	main(void)
{
	char *c = "123";

	printf("ft: %lu\n", ft_strlen(c));
	printf("test: %lu\n", strlen(c));
} */
