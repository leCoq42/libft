/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strlen.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: mhaan <marvin@codam.nl>                      +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/06 11:19:12 by mhaan         #+#    #+#                 */
/*   Updated: 2022/10/06 15:41:30 by mhaan         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

unsigned long	ft_strlen(const char *s)
{
	unsigned long	i;

	i = 0;
	while(s[i])
		i++;
	return (i);
}

/* # include	<stdio.h>
# include	<string.h>
int	main(void)
{
	char *c = "";

	printf("ft: %lu\n", ft_strlen(c));
	printf("test: %lu\n", strlen(c));
} */
